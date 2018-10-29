/*
*	@file	Scene.h
*	@brief	シーンクラス
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	初版作成
*/
#pragma once
/* ヘッダインクルード */
#include <memory>

/// @class Scene
/// @brief 各シーンのスーパークラス
///
/// シーンに必要な情報を格納したスーパークラス
/// シーンはこのクラスを継承して作成する
/// このクラス単体ではインスタンス出来ない
class Scene : public std::enable_shared_from_this<Scene>
{
public:
	///	@brief	コンストラクタ
	Scene();

	/// @brief	デストラクタ
	virtual ~Scene();

	/// @brief	シーン更新処理
	/// @retval	次フレームのシーン
	virtual std::shared_ptr<Scene> Update() = 0;
	
	/// @brief	描画処理
	virtual void Draw() const = 0;
};

