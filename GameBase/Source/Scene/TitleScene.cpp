#include "TitleScene.h"
#include <Dxlib.h>
#include "GameScene.h"

TitleScene::TitleScene()
{
}


TitleScene::~TitleScene()
{
}

std::shared_ptr<Scene> TitleScene::Create()
{
	return std::shared_ptr<Scene>(new TitleScene());
}

std::shared_ptr<Scene> TitleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_Z))
	{
		return GameScene::Create();
	}
	return shared_from_this();
}

void TitleScene::Draw() const
{
	DrawFormatString(0, 0, 0xffffff, "TitleScene");
}
