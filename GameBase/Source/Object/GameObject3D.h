/*
*	@file	GameObject3D.h
*	@brief	3D�Q�[���I�u�W�F�N�g�N���X���L�q����
*	@author	Ishibashi Ryuto
*	@date	2018/10/30	���ō쐬
*/
#pragma once
/* �w�b�_�C���N���[�h */
#include "GameObject.h"
#include "../Math/Math.h"

///	@class	GameObject3D
///	@brief	3D�Q�[���p�I�u�W�F�N�g�N���X
class GameObject3D :
	public GameObject
{
public:
	/// @brief	�f�X�g���N�^
	virtual ~GameObject3D();

	/// @brief	�Q�[���I�u�W�F�N�g�𐶐�����
	static std::shared_ptr<GameObject3D> Create();

	/// @brief	�X�V����
	std::shared_ptr<GameObject> Update();

	/// @brief	�`�揈��
	void Draw() const;

protected:
	/* �ϐ��錾 */
	Math::Vector3		mPos;			//! �ʒu
	Math::Vector3		mVel;			//! ���x
	Math::Vector3		mAccel;			//! �����x
	Math::Quaternion	mRot;			//! ��]
	Math::Quaternion	mRotVel;		//! ��]�p���x
	Math::Vector3		mScale;			//! �g�嗦
	int					mModelHandle;	//! ���f���n���h��

	/* ���[�J�����\�b�h��` */
	///	@brief	�R���X�g���N�^
	GameObject3D();

	/// @brief	�I�u�W�F�N�g���w��ʒu�ɃZ�b�g����
	/// @param[in]	pos		: �I�u�W�F�N�g�̈ʒu
	void SetPos(const Math::Vector3& pos);

	/// @brief	�I�u�W�F�N�g���w��ʒu�ɃZ�b�g����
	///	@param[in]	posX	: �I�u�W�F�N�g��x���W
	///	@param[in]	posY	: �I�u�W�F�N�g��y���W
	///	@param[in]	posZ	: �I�u�W�F�N�g��z���W
	void SetPos(float posX, float posY, float posZ);

	/// @brief	�I�u�W�F�N�g�̍��W���擾����
	///	@retval	�I�u�W�F�N�g��3�������W
	const Math::Vector3& GetPos() const;

	///	@brief	�I�u�W�F�N�g���w��ʈړ�������
	///	@param[in]	vel	:�ړ���
	void Move(const Math::Vector3& vel);

	/// @brief	�I�u�W�F�N�g���w��ʈړ�������
	///	@param[in]	velX	: X�����ړ���
	///	@param[in]	velY	: Y�����ړ���
	///	@param[in]	velZ	: Z�����ړ���
	void Move(float velX, float velY, float velZ);
};

