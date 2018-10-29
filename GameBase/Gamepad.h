/*
*	@file	Gamepad.h
*	@brief	�Q�[���p�b�g���͂��Ǘ�����N���X
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	���ō쐬
*/
#pragma once
/* �w�b�_�C���N���[�h */
#include <DxLib.h>

class Gamepad
{
public:
	/// @brief	�R���X�g���N�^
	Gamepad();

	/// @brief	�f�X�g���N�^
	~Gamepad();
private:
	int mGamepadIndex;		//! ���g�̃C���f�b�N�X���
	XINPUT_STATE mState;	//! ���͏��
	XINPUT_STATE mPreState;	//! �O�t���[���̓��͏��
};

