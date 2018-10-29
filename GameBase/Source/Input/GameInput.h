/*
*	@file	GameInput.h
*	@brief	ゲーム用入力クラスを記述する
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	初版作成
*/
#pragma once

/// @enum GameInputButton
enum GameInputButton
{
	Up,
	Down,
	Left,
	Right,
	Button1,
	Button2,
	Button3,
	Button4,
	Button5,
	Button6,
	Button7,
	Button8,
	Button9,
	Button10,
	Start,
	Select
};

class GameInput
{
public:
	GameInput();
	~GameInput();
};

