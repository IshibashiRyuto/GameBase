/*
*	@file	TitleScene.h
*	@brief	タイトルシーンクラスを記述する
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	初版作成
*/
#pragma once
/* 自作ヘッダインクルード */
#include "Scene.h"

class TitleScene :
	public Scene
{
public:
	/// @brief	デストラクタ
	~TitleScene();

	/// @brief	タイトルシーンクラスを生成する
	static std::shared_ptr<Scene> Create();

	///	@brief	更新処理
	std::shared_ptr<Scene> Update();

	///	@brief 描画処理
	void Draw() const;

private:
	/* ローカルメソッド定義 */
	/// コンストラクタ
	TitleScene();
};

