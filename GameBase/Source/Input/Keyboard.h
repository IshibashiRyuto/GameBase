/*
*	@file	Keyboard.h
*	@brief	キーボード入力を管理するクラス
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	初版作成
*/
#pragma once

/// @class Keyboard
///	@brief	キーボード入力を管理する
///	
///	キーボードの入力状態を管理するクラス
///	シングルトンでアクセス可能
class Keyboard
{
public:
	///	@brief	デストラクタ
	~Keyboard();

	/// @brief	インスタンスを取得する
	///	@retval	Keyboardクラスインスタンス
	static Keyboard& GetInstance()
	{
		static Keyboard inst;
		return inst;
	}

	/// @brief	キーボード入力状態を更新する
	void Update();

	///	@brief	キーが押されているかチェックする
	///	@param[in]	keyCode				: キーコード
	/// @retval	キーが押されている		: true
	/// @retval	キーが押されていない	: false
	bool IsKeyDown(int keyCode);

	/// @brief	キーが押された瞬間かチェックする
	/// @param[in]	keyCode					: キーコード
	///	@retval	キーが押された瞬間である	: true
	///	@retval	キーが押された瞬間でない	: false
	bool IsKeyTrigger(int keyCode);

private:
	/* 変数定義 */
	char mKeyState[256];
	char mPreKeyState[256];
		
	/* ローカルメソッド定義 */
	/// @brief	コンストラクタ
	Keyboard();

	///	@brief	コピーコンストラクタ
	Keyboard(const Keyboard&);

	/// @brief	オペレータオーバロード
	void operator=(const Keyboard&);
};

