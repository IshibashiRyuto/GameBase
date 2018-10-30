/*
*	@file	GameObject3D.h
*	@brief	3Dゲームオブジェクトクラスを記述する
*	@author	Ishibashi Ryuto
*	@date	2018/10/30	初版作成
*/
#pragma once
/* ヘッダインクルード */
#include "GameObject.h"
#include "../Math/Math.h"

///	@class	GameObject3D
///	@brief	3Dゲーム用オブジェクトクラス
class GameObject3D :
	public GameObject
{
public:
	/// @brief	デストラクタ
	virtual ~GameObject3D();

	/// @brief	ゲームオブジェクトを生成する
	static std::shared_ptr<GameObject3D> Create();

	/// @brief	更新処理
	std::shared_ptr<GameObject> Update();

	/// @brief	描画処理
	void Draw() const;

protected:
	/* 変数宣言 */
	Math::Vector3		mPos;			//! 位置
	Math::Vector3		mVel;			//! 速度
	Math::Vector3		mAccel;			//! 加速度
	Math::Quaternion	mRot;			//! 回転
	Math::Quaternion	mRotVel;		//! 回転角速度
	Math::Vector3		mScale;			//! 拡大率
	int					mModelHandle;	//! モデルハンドル

	/* ローカルメソッド定義 */
	///	@brief	コンストラクタ
	GameObject3D();

	/// @brief	オブジェクトを指定位置にセットする
	/// @param[in]	pos		: オブジェクトの位置
	void SetPos(const Math::Vector3& pos);

	/// @brief	オブジェクトを指定位置にセットする
	///	@param[in]	posX	: オブジェクトのx座標
	///	@param[in]	posY	: オブジェクトのy座標
	///	@param[in]	posZ	: オブジェクトのz座標
	void SetPos(float posX, float posY, float posZ);

	/// @brief	オブジェクトの座標を取得する
	///	@retval	オブジェクトの3次元座標
	const Math::Vector3& GetPos() const;

	///	@brief	オブジェクトを指定量移動させる
	///	@param[in]	vel	:移動量
	void Move(const Math::Vector3& vel);

	/// @brief	オブジェクトを指定量移動させる
	///	@param[in]	velX	: X方向移動量
	///	@param[in]	velY	: Y方向移動量
	///	@param[in]	velZ	: Z方向移動量
	void Move(float velX, float velY, float velZ);
};

