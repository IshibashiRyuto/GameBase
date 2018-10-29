/*
*		@file	Application.h
*		@brief	アプリケーションクラスを記述
*		@author	Ishibashi Ryuto
*		@date	2018/10/27	初版作成
*/
#pragma once
/* システムヘッダインクルード */
#include <string>
#include <memory>
#include <DxLib.h>

/* クラス使用宣言 */
class Scene;
class Keyboard;

/// @class	Application
/// @brief	アプリケーション管理クラス
///
/// アプリケーションの実行を管理するクラス
/// アプリケーションの基本処理はこのクラスに記述する
class Application
{
public:
	/// @brief	デストラクタ
	~Application();

	/// @brief	インスタンスを取得
	/// @retval	インスタンスへのアドレス
	static Application& GetInstance()
	{
		static Application inst;
		return inst;
	}

	/// @brief		初期化処理
	/// @param[in]	appName			: アプリケーション名
	///	@param[in]	wndWidth		: ウィンドウ幅
	///	@param[in]	wndHeight		: ウィンドウ高さ
	/// @param[in]	isFullScreen	: フルスクリーンフラグ
	bool Initialize(std::string appName, int wndWidth, int wndHeight, bool isFullScreen = false);

	/// @brief	実行処理
	void Run();

	///	@brief	終了前処理
	void Terminate();


	/// @brief	ウィンドウサイズを取得する
	const SIZE& GetWindowSize() const;
private:

	/* 変数定義 */
	std::shared_ptr<Scene>	mCurrentScene;		//! 現在のシーン
	std::shared_ptr<Scene>	mNextScene;			//! 次のシーン
	SIZE					mWindowSize;		//! ウィンドウサイズ
	Keyboard&				mKeyboard;			//! キーボードへの参照

	/* ローカルメソッド定義 */

	/// @brief	コンストラクタ
	Application();

	/// @brief	コピーコンストラクタ
	Application(const Application&);

	/// @brief	オペレータオーバーロード
	void operator=(const Application&);

};

