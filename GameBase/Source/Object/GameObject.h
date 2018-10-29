/*
*	@file	GameObject.h
*	@brief	�Q�[���I�u�W�F�N�g�̏�Ԃ�ۑ�����N���X���L�q����
*	@author	Ishibashi Ryuto
*	@date	2018/10/28	���ō쐬
*/
#pragma once
/* �w�b�_�C���N���[�h */
#include <memory>


///	@class GameObject
///	@brief �Q�[����ɑ��݂���I�u�W�F�N�g
///	
///	�Q�[����̃I�u�W�F�N�g��\���N���X
/// �Q�[���I�u�W�F�N�g�͌������̃N���X���p������
///	enable_shared_from_this���p�����邽�߁Ashared_ptr�ŊǗ����邱��
class GameObject
	: public std::enable_shared_from_this<GameObject>
{
public:
	/// @brief	�f�X�g���N�^
	virtual ~GameObject();

	///	@brief		�X�V����
	///	@retval		�������g�̃I�u�W�F�N�g
	virtual std::shared_ptr<GameObject> Update() = 0;

	/// @brief	�`�揈��
	virtual void Draw() const = 0;

protected:
	///	@brief	�R���X�g���N�^
	GameObject();
};

