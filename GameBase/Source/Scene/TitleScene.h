/*
*	@file	TitleScene.h
*	@brief	�^�C�g���V�[���N���X���L�q����
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	���ō쐬
*/
#pragma once
/* ����w�b�_�C���N���[�h */
#include "Scene.h"

class TitleScene :
	public Scene
{
public:
	/// @brief	�f�X�g���N�^
	~TitleScene();

	/// @brief	�^�C�g���V�[���N���X�𐶐�����
	static std::shared_ptr<Scene> Create();

	///	@brief	�X�V����
	std::shared_ptr<Scene> Update();

	///	@brief �`�揈��
	void Draw() const;

private:
	/* ���[�J�����\�b�h��` */
	/// �R���X�g���N�^
	TitleScene();
};

