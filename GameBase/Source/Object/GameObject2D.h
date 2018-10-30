/*
*	@file	GameObject2D
*	@brief	2Dゲーム用ゲームオブジェクトを記述する
*	@author	Ishibashi Ryuto
*	@date	2018/10/28	初版作成
*/
#pragma once
/* ヘッダインクルード */
#include "GameObject.h"
#include "../Math/Math.h"

class GameObject2D :
	public GameObject
{
public:
	/// @brief	デストラクタ
	virtual ~GameObject2D();

	/// @brief	更新処理
	std::shared_ptr<GameObject> Update();

	/// @brief	描画処理
	void Draw() const;

	/// @brief	ゲームオブジェクトを生成する
	static std::shared_ptr<GameObject2D> Create();


	/// @brief	オブジェクトを指定位置にセットする
	///	@param[in]	pos	: オブジェクトの位置
	void SetPos(const Math::Vector2& pos);

	/// @brief	オブジェクトを指定位置にセットする
	///	@param[in]	posX	: オブジェクトX座標
	///	@param[in]	posY	: オブジェクトY座標
	void SetPos(float posX, float posY);

	/// @brief	オブジェクト座標を取得する
	///	@retval	オブジェクトの位置
	const Math::Vector2& GetPos() const;

	/// @brief オブジェクトを指定量移動させる
	///	@param[in]	vel	: 移動量
	void Move(const Math::Vector2& vel);

	/// @brief オブジェクトを指定量移動させる
	/// @param[in]	velX: X方向移動量
	///	@param[in]	velY: Y方向移動量
	void Move(float velX, float velY);

	/// @brief	オブジェクトの速度を設定する
	///	@param[in]	vel	:オブジェクトの速度
	void SetVel(const Math::Vector2& vel);

	/// @brief	オブジェクトの速度を設定する
	///	@param[in]	velX	:オブジェクトのX方向速度
	///	@param[in]	velY	:オブジェクトのY方向速度
	void SetVel(float velX, float velY);

	/// @brief	オブジェクトの速度を取得する
	const Math::Vector2& GetVel() const;

	/// @brief	オブジェクトの速度に加速度を加算する
	///	@param[in]	accel	: オブジェクトの加速度
	void AddVel(const Math::Vector2& accel);

	/// @brief	オブジェクトの加速度を設定する
	///	@param[in]	accel	:オブジェクトの加速度
	void SetAccel(const Math::Vector2& accel);

	/// @brief	オブジェクトの加速度を設定する
	///	@param[in]	velX	:オブジェクトのX方向加速度
	///	@param[in]	velY	:オブジェクトのY方向加速度
	void SetAccel(float velX, float velY);

	/// @brief	オブジェクトの加速度を取得する
	const Math::Vector2& GetAccel() const;

	/// @brief	オブジェクトの角度を設定する
	///	@param[in]	rad	: 角度
	void SetAngle(float rad);

	/// @brief	オブジェクトを回転させる
	/// @param[in]	rad	: 回転角度
	void Rotate(float rad);

	/// @brief	オブジェクトの角度を取得する
	float GetAngle() const;

	/// @brief	オブジェクトの回転角速度を設定する
	/// @param[in]	radVal	: 回転角速度
	void SetAngleVel(float radVel);

	///	@brief	オブジェクトの回転角速度を取得する
	float GetAngleVel() const;

	/// @brief	オブジェクトの拡大率を設定する
	///	@param[in]	scale	: 拡大率
	void SetScale(float scale);

	/// @brief	画像データをセットする
	///	@param[in]	グラフィックハンドル
	void SetGraphic(int graHandle);

protected:
	/* 変数宣言 */
	Math::Vector2	mPos;			//! 位置
	Math::Vector2	mVel;			//! 速度
	Math::Vector2	mAccel;			//!	加速度
	float			mAngle;			//! 角度
	float			mAngleVel;		//! 角速度
	float			mScale;			//! 拡大率
	int				mGraphicHandle;	//! 画像データ

	/* ローカルメソッド定義 */
	///	@brief	コンストラクタ
	GameObject2D();
};

