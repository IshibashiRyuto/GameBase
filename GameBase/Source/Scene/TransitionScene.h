/*
*	@file	TransitionScene.h
*	@breaf	TransitionSceneクラスを記述する
*	@author	IshibashiRyuto
*	@date	2018/10/27	初版作成
*/
#pragma once
/* ヘッダインクルード */
#include "Scene.h"


/// @class	TransitionScene
///	@brief	シーン遷移用シーン
///	
///	シーン遷移の際に使用する、切り替え効果の付いたシーン
///	遷移元、遷移先シーンを引き渡す
class TransitionScene :
	public Scene
{
public:
	///	@brief	デストラクタ
	~TransitionScene();

	///	@brief	シーン遷移用シーンを生成する
	/// @param[in]	srcScene		: 遷移元シーン
	/// @param[in]	dstScene		: 遷移先シーン
	/// @param[in]	transFrameCount	: 遷移までのフレーム数
	static std::shared_ptr<Scene> Create(std::shared_ptr<Scene> srcScene,
		std::shared_ptr<Scene> dstScene,
		int transFrameCount);

	/// @brief	更新処理
	std::shared_ptr<Scene> Update();

	///	@brief	描画処理
	void Draw() const;
protected:
	/* 変数定義 */
	std::shared_ptr<Scene> mDstScene;	//!	遷移元シーン
	std::shared_ptr<Scene> mSrcScene;	//!	遷移先シーン
	int mTransFrameCnt;					//! 遷移までのフレーム数
	int mFrameCnt;						//! 現在のフレーム数
	int mDstSceneGraphic;				//! 遷移元シーンの画像を格納するハンドル
	int mSrcSceneGraphic;				//! 遷移先シーンの画像を格納するハンドル


	/* ローカルメソッド定義 */
	///	@brief	コンストラクタ
	TransitionScene(std::shared_ptr<Scene> srcScene, std::shared_ptr<Scene> dstScene, int transFrameCnt);
};

