/*
*	@file	Keyboard.h
*	@brief	�L�[�{�[�h���͂��Ǘ�����N���X
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	���ō쐬
*/
#pragma once

/// @class Keyboard
///	@brief	�L�[�{�[�h���͂��Ǘ�����
///	
///	�L�[�{�[�h�̓��͏�Ԃ��Ǘ�����N���X
///	�V���O���g���ŃA�N�Z�X�\
class Keyboard
{
public:
	///	@brief	�f�X�g���N�^
	~Keyboard();

	/// @brief	�C���X�^���X���擾����
	///	@retval	Keyboard�N���X�C���X�^���X
	static Keyboard& GetInstance()
	{
		static Keyboard inst;
		return inst;
	}

	/// @brief	�L�[�{�[�h���͏�Ԃ��X�V����
	void Update();

	///	@brief	�L�[��������Ă��邩�`�F�b�N����
	///	@param[in]	keyCode				: �L�[�R�[�h
	/// @retval	�L�[��������Ă���		: true
	/// @retval	�L�[��������Ă��Ȃ�	: false
	bool IsKeyDown(int keyCode);

	/// @brief	�L�[�������ꂽ�u�Ԃ��`�F�b�N����
	/// @param[in]	keyCode					: �L�[�R�[�h
	///	@retval	�L�[�������ꂽ�u�Ԃł���	: true
	///	@retval	�L�[�������ꂽ�u�ԂłȂ�	: false
	bool IsKeyTrigger(int keyCode);

private:
	/* �ϐ���` */
	char mKeyState[256];
	char mPreKeyState[256];
		
	/* ���[�J�����\�b�h��` */
	/// @brief	�R���X�g���N�^
	Keyboard();

	///	@brief	�R�s�[�R���X�g���N�^
	Keyboard(const Keyboard&);

	/// @brief	�I�y���[�^�I�[�o���[�h
	void operator=(const Keyboard&);
};

