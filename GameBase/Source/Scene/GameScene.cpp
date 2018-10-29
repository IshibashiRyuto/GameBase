#include "GameScene.h"
#include <Dxlib.h>
#include "TitleScene.h"
#include "TransitionScene.h"
#include "../Object/GameObject2D.h"
#include "../Input/Keyboard.h"

GameScene::GameScene()
	: mKeyboard(Keyboard::GetInstance())
{
	mGameObjectTest = GameObject2D::Create();
}


GameScene::~GameScene()
{
}

std::shared_ptr<Scene> GameScene::Create()
{
	return std::shared_ptr<Scene>(new GameScene());
}

std::shared_ptr<Scene> GameScene::Update()
{
	if (mKeyboard.IsKeyTrigger(KEY_INPUT_X))
	{
		return TransitionScene::Create(shared_from_this(), TitleScene::Create(), 60);
	}

	Math::Vector2 speed;
	if (mKeyboard.IsKeyDown(KEY_INPUT_UP))
	{
		speed.y = -2.0f;
	}
	if (mKeyboard.IsKeyDown(KEY_INPUT_DOWN))
	{
		speed.y = 2.0f;
	}
	if (mKeyboard.IsKeyDown(KEY_INPUT_LEFT))
	{
		speed.x = -2.0f;
	}
	if (mKeyboard.IsKeyDown(KEY_INPUT_RIGHT))
	{
		speed.x = 2.0f;
	}



	if (mGameObjectTest)
	{
		mGameObjectTest = mGameObjectTest->Update();
	}

	return shared_from_this();
}

void GameScene::Draw() const
{
	DrawFormatString(0, 0, 0xffffff, "Game Scene");
	if (mGameObjectTest)
	{
		mGameObjectTest->Draw();
	}
}
