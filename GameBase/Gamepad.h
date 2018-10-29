/*
*	@file	Gamepad.h
*	@brief	ゲームパット入力を管理するクラス
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	初版作成
*/
#pragma once
/* ヘッダインクルード */
#include <DxLib.h>

class Gamepad
{
public:
	/// @brief	コンストラクタ
	Gamepad();

	/// @brief	デストラクタ
	~Gamepad();
private:
	int mGamepadIndex;		//! 自身のインデックス情報
	XINPUT_STATE mState;	//! 入力情報
	XINPUT_STATE mPreState;	//! 前フレームの入力情報
};

