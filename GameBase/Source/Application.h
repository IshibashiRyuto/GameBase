/*
*		@file	Application.h
*		@brief	�A�v���P�[�V�����N���X���L�q
*		@author	Ishibashi Ryuto
*		@date	2018/10/27	���ō쐬
*/
#pragma once
/* �V�X�e���w�b�_�C���N���[�h */
#include <string>
#include <memory>
#include <DxLib.h>

/* �N���X�g�p�錾 */
class Scene;
class Keyboard;

/// @class	Application
/// @brief	�A�v���P�[�V�����Ǘ��N���X
///
/// �A�v���P�[�V�����̎��s���Ǘ�����N���X
/// �A�v���P�[�V�����̊�{�����͂��̃N���X�ɋL�q����
class Application
{
public:
	/// @brief	�f�X�g���N�^
	~Application();

	/// @brief	�C���X�^���X���擾
	/// @retval	�C���X�^���X�ւ̃A�h���X
	static Application& GetInstance()
	{
		static Application inst;
		return inst;
	}

	/// @brief		����������
	/// @param[in]	appName			: �A�v���P�[�V������
	///	@param[in]	wndWidth		: �E�B���h�E��
	///	@param[in]	wndHeight		: �E�B���h�E����
	/// @param[in]	isFullScreen	: �t���X�N���[���t���O
	bool Initialize(std::string appName, int wndWidth, int wndHeight, bool isFullScreen = false);

	/// @brief	���s����
	void Run();

	///	@brief	�I���O����
	void Terminate();


	/// @brief	�E�B���h�E�T�C�Y���擾����
	const SIZE& GetWindowSize() const;
private:

	/* �ϐ���` */
	std::shared_ptr<Scene>	mCurrentScene;		//! ���݂̃V�[��
	std::shared_ptr<Scene>	mNextScene;			//! ���̃V�[��
	SIZE					mWindowSize;		//! �E�B���h�E�T�C�Y
	Keyboard&				mKeyboard;			//! �L�[�{�[�h�ւ̎Q��

	/* ���[�J�����\�b�h��` */

	/// @brief	�R���X�g���N�^
	Application();

	/// @brief	�R�s�[�R���X�g���N�^
	Application(const Application&);

	/// @brief	�I�y���[�^�I�[�o�[���[�h
	void operator=(const Application&);

};

