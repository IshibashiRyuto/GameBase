/*
*	@file	GameObject.h
*	@brief	ゲームオブジェクトの状態を保存するクラスを記述する
*	@author	Ishibashi Ryuto
*	@date	2018/10/28	初版作成
*/
#pragma once
/* ヘッダインクルード */
#include <memory>


///	@class GameObject
///	@brief ゲーム上に存在するオブジェクト
///	
///	ゲーム上のオブジェクトを表すクラス
/// ゲームオブジェクトは原則このクラスを継承する
///	enable_shared_from_thisを継承するため、shared_ptrで管理すること
class GameObject
	: public std::enable_shared_from_this<GameObject>
{
public:
	/// @brief	デストラクタ
	virtual ~GameObject();

	///	@brief		更新処理
	///	@retval		自分自身のオブジェクト
	virtual std::shared_ptr<GameObject> Update() = 0;

	/// @brief	描画処理
	virtual void Draw() const = 0;

protected:
	///	@brief	コンストラクタ
	GameObject();
};

