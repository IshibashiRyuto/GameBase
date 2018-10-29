/*
*	@file	Scene.h
*	@brief	�V�[���N���X
*	@author	Ishibashi Ryuto
*	@date	2018/10/27	���ō쐬
*/
#pragma once
/* �w�b�_�C���N���[�h */
#include <memory>

/// @class Scene
/// @brief �e�V�[���̃X�[�p�[�N���X
///
/// �V�[���ɕK�v�ȏ����i�[�����X�[�p�[�N���X
/// �V�[���͂��̃N���X���p�����č쐬����
/// ���̃N���X�P�̂ł̓C���X�^���X�o���Ȃ�
class Scene : public std::enable_shared_from_this<Scene>
{
public:
	///	@brief	�R���X�g���N�^
	Scene();

	/// @brief	�f�X�g���N�^
	virtual ~Scene();

	/// @brief	�V�[���X�V����
	/// @retval	���t���[���̃V�[��
	virtual std::shared_ptr<Scene> Update() = 0;
	
	/// @brief	�`�揈��
	virtual void Draw() const = 0;
};

