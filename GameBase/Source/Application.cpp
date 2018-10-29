/*
*	@file	Application.cpp
*	@brief	Applicationの実装
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	初版作成
*/
#include "Application.h"
#include <Dxlib.h>
#include "Scene/Scene.h"
#include "Scene/TitleScene.h"
#include "Input/Keyboard.h"

using namespace DxLib;

bool Application::Initialize(std::string appName, int wndWidth, int wndHeight, bool isFullScreen)
{
	ChangeWindowMode(!isFullScreen);
	SetWindowText(appName.c_str());
	SetGraphMode(wndWidth, wndHeight, 32);
	mWindowSize.cx = wndWidth;
	mWindowSize.cy = wndHeight;

	if (DxLib_Init() == -1)
	{
		return false;
	}

	SetDrawScreen(DX_SCREEN_BACK);

	return true;
}

void Application::Run()
{
	while (1)
	{
		mKeyboard.Update();
		if (ProcessMessage() == -1)
		{
			break;
		}

		//	次のシーンがなければ終了
		if (!mNextScene)
		{
			break;
		}

		//	エスケープを押したら終了
		if (mKeyboard.IsKeyTrigger(KEY_INPUT_ESCAPE))
		{
			break;
		}

		//	更新処理
		mCurrentScene = mNextScene;
		mNextScene = mCurrentScene->Update();
		

		//	描画処理
		ClsDrawScreen();

		mCurrentScene->Draw();

		ScreenFlip();
	}
}

void Application::Terminate()
{
	DxLib_End();
}

const SIZE & Application::GetWindowSize() const
{
	return mWindowSize;
}

Application::Application()
	: mCurrentScene(TitleScene::Create())
	, mKeyboard(Keyboard::GetInstance())
{
	mNextScene = mCurrentScene;
}

void Application::operator=(const Application &)
{
}


Application::~Application()
{
}
