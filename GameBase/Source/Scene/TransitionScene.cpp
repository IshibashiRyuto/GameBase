#include "TransitionScene.h"
#include "../Application.h"
#include <DxLib.h>

TransitionScene::TransitionScene(std::shared_ptr<Scene> srcScene,
	std::shared_ptr<Scene> dstScene,
	int transFrameCnt)
	: mDstScene(dstScene)
	, mSrcScene(srcScene)
	, mTransFrameCnt(transFrameCnt)
	, mFrameCnt(0)
{
	auto windowSize = Application::GetInstance().GetWindowSize();
	mSrcSceneGraphic = MakeScreen(windowSize.cy, windowSize.cy);
	mDstSceneGraphic = MakeScreen(windowSize.cx, windowSize.cy);

	SetDrawScreen(mSrcSceneGraphic);
	mSrcScene->Draw();
	SetDrawScreen(mDstSceneGraphic);
	mDstScene->Draw();
	SetDrawScreen(DX_SCREEN_BACK);
}


TransitionScene::~TransitionScene()
{
	DeleteGraph(mDstSceneGraphic);
	DeleteGraph(mSrcSceneGraphic);
}

std::shared_ptr<Scene> TransitionScene::Create(std::shared_ptr<Scene> srcScene, std::shared_ptr<Scene> dstScene, int transFrameCount)
{
	return std::shared_ptr<Scene>(new TransitionScene(srcScene, dstScene, transFrameCount));
}

std::shared_ptr<Scene> TransitionScene::Update()
{
	if (mTransFrameCnt <= ++mFrameCnt)
	{
		return mDstScene;
	}
	return shared_from_this();
}

void TransitionScene::Draw() const
{
	DrawGraph(0, 0, mSrcSceneGraphic, false);
}
