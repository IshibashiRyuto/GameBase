/*
*	@file	GameObject2D
*	@brief	2D�Q�[���p�Q�[���I�u�W�F�N�g���L�q����
*	@author	Ishibashi Ryuto
*	@date	2018/10/28	���ō쐬
*/
#pragma once
/* �w�b�_�C���N���[�h */
#include "GameObject.h"
#include "../Math/Math.h"

class GameObject2D :
	public GameObject
{
public:
	/// @brief	�f�X�g���N�^
	virtual ~GameObject2D();

	/// @brief	�X�V����
	std::shared_ptr<GameObject> Update();

	/// @brief	�`�揈��
	void Draw() const;

	/// @brief	�Q�[���I�u�W�F�N�g�𐶐�����
	static std::shared_ptr<GameObject2D> Create();


	/// @brief	�I�u�W�F�N�g���w��ʒu�ɃZ�b�g����
	///	@param[in]	pos	: �I�u�W�F�N�g�̈ʒu
	void SetPos(const Math::Vector2& pos);

	/// @brief	�I�u�W�F�N�g���w��ʒu�ɃZ�b�g����
	///	@param[in]	posX	: �I�u�W�F�N�gX���W
	///	@param[in]	posY	: �I�u�W�F�N�gY���W
	void SetPos(float posX, float posY);

	/// @brief	�I�u�W�F�N�g���W���擾����
	///	@retval	�I�u�W�F�N�g�̈ʒu
	const Math::Vector2& GetPos() const;

	/// @brief �I�u�W�F�N�g���w��ʈړ�������
	///	@param[in]	vel	: �ړ���
	void Move(const Math::Vector2& vel);

	/// @brief �I�u�W�F�N�g���w��ʈړ�������
	/// @param[in]	velX: X�����ړ���
	///	@param[in]	velY: Y�����ړ���
	void Move(float velX, float velY);

	/// @brief	�I�u�W�F�N�g�̑��x��ݒ肷��
	///	@param[in]	vel	:�I�u�W�F�N�g�̑��x
	void SetVel(const Math::Vector2& vel);

	/// @brief	�I�u�W�F�N�g�̑��x��ݒ肷��
	///	@param[in]	velX	:�I�u�W�F�N�g��X�������x
	///	@param[in]	velY	:�I�u�W�F�N�g��Y�������x
	void SetVel(float velX, float velY);

	/// @brief	�I�u�W�F�N�g�̑��x���擾����
	const Math::Vector2& GetVel() const;

	/// @brief	�I�u�W�F�N�g�̑��x�ɉ����x�����Z����
	///	@param[in]	accel	: �I�u�W�F�N�g�̉����x
	void AddVel(const Math::Vector2& accel);

	/// @brief	�I�u�W�F�N�g�̉����x��ݒ肷��
	///	@param[in]	accel	:�I�u�W�F�N�g�̉����x
	void SetAccel(const Math::Vector2& accel);

	/// @brief	�I�u�W�F�N�g�̉����x��ݒ肷��
	///	@param[in]	velX	:�I�u�W�F�N�g��X���������x
	///	@param[in]	velY	:�I�u�W�F�N�g��Y���������x
	void SetAccel(float velX, float velY);

	/// @brief	�I�u�W�F�N�g�̉����x���擾����
	const Math::Vector2& GetAccel() const;

	/// @brief	�I�u�W�F�N�g�̊p�x��ݒ肷��
	///	@param[in]	rad	: �p�x
	void SetAngle(float rad);

	/// @brief	�I�u�W�F�N�g����]������
	/// @param[in]	rad	: ��]�p�x
	void Rotate(float rad);

	/// @brief	�I�u�W�F�N�g�̊p�x���擾����
	float GetAngle() const;

	/// @brief	�I�u�W�F�N�g�̉�]�p���x��ݒ肷��
	/// @param[in]	radVal	: ��]�p���x
	void SetAngleVel(float radVel);

	///	@brief	�I�u�W�F�N�g�̉�]�p���x���擾����
	float GetAngleVel() const;

	/// @brief	�I�u�W�F�N�g�̊g�嗦��ݒ肷��
	///	@param[in]	scale	: �g�嗦
	void SetScale(float scale);

	/// @brief	�摜�f�[�^���Z�b�g����
	///	@param[in]	�O���t�B�b�N�n���h��
	void SetGraphic(int graHandle);

protected:
	/* �ϐ��錾 */
	Math::Vector2	mPos;			//! �ʒu
	Math::Vector2	mVel;			//! ���x
	Math::Vector2	mAccel;			//!	�����x
	float			mAngle;			//! �p�x
	float			mAngleVel;		//! �p���x
	float			mScale;			//! �g�嗦
	int				mGraphicHandle;	//! �摜�f�[�^

	/* ���[�J�����\�b�h��` */
	///	@brief	�R���X�g���N�^
	GameObject2D();
};

