/*
*	@file	GameScene.h
*	@brief	�Q�[���V�[���N���X���L�q����
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	���ō쐬
*/

#pragma once
/* �w�b�_�C���N���[�h */
#include "Scene.h"

/* �N���X�g�p�錾 */
class GameObject;
class Keyboard;

class GameScene :
	public Scene
{
public:
	///	@brief	�f�X�g���N�^
	~GameScene();

	///	@brife	GameScene�N���X�𐶐�����
	static std::shared_ptr<Scene> Create();

	/// @brief	�X�V����
	///	@retval	���t���[���̃V�[��
	std::shared_ptr<Scene> Update();

	/// @brief	�`�揈��
	void Draw() const;

private:
	/* �ϐ��錾 */
	Keyboard& mKeyboard;
	// debug
	std::shared_ptr<GameObject>	mGameObjectTest;
	// debugEnd

	/* ���[�J�����\�b�h��` */
	///	@brief	�R���X�g���N�^
	GameScene();
};

