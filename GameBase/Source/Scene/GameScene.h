/*
*	@file	GameScene.h
*	@brief	ゲームシーンクラスを記述する
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	初版作成
*/

#pragma once
/* ヘッダインクルード */
#include "Scene.h"

/* クラス使用宣言 */
class GameObject;
class Keyboard;

class GameScene :
	public Scene
{
public:
	///	@brief	デストラクタ
	~GameScene();

	///	@brife	GameSceneクラスを生成する
	static std::shared_ptr<Scene> Create();

	/// @brief	更新処理
	///	@retval	次フレームのシーン
	std::shared_ptr<Scene> Update();

	/// @brief	描画処理
	void Draw() const;

private:
	/* 変数宣言 */
	Keyboard& mKeyboard;
	// debug
	std::shared_ptr<GameObject>	mGameObjectTest;
	// debugEnd

	/* ローカルメソッド定義 */
	///	@brief	コンストラクタ
	GameScene();
};

