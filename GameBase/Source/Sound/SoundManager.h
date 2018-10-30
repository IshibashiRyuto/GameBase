/*
*	@file	SoundManager.h
*	@brief	音楽再生関連を管理するクラスを記述する
*	@author	Ishibashi Ryuto
*	@date	2018/10/29	初版作成
*/
#pragma once
/* ヘッダインクルード */
#include <string>
#include <map>

/// @class	SoundManager
///	@brief	音楽再生関連を管理するクラス
///
///	音楽の読込、再生を管理するクラス
/// シングルトンで作成する
class SoundManager
{
public:
	///	@brief	コンストラクタ
	SoundManager();
	/// @brief	デストラクタ
	~SoundManager();

	///	@brief		音声ファイルを読み込む
	/// @param[in]	filePath		: ファイルパス
	///	@retval		読み込み成功	: 音声ファイルハンドル
	/// @retval		読み込み失敗	: -1
	int Load(std::string filePath);

	/// @brief		音声ファイルをBGMとして再生する
	///	@param[in]	soundHandle		: 音声ファイルハンドル
	///	@retval		再生成功		: true
	///	@retval		再生失敗		: false
private:
	std::map<std::string, int> mSoundLoadMap;	//!	読み込み済みサウンドの管理用
};

