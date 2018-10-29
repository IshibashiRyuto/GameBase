/*
*	@file	TransitionScene.h
*	@breaf	TransitionScene�N���X���L�q����
*	@author	IshibashiRyuto
*	@date	2018/10/27	���ō쐬
*/
#pragma once
/* �w�b�_�C���N���[�h */
#include "Scene.h"


/// @class	TransitionScene
///	@brief	�V�[���J�ڗp�V�[��
///	
///	�V�[���J�ڂ̍ۂɎg�p����A�؂�ւ����ʂ̕t�����V�[��
///	�J�ڌ��A�J�ڐ�V�[���������n��
class TransitionScene :
	public Scene
{
public:
	///	@brief	�f�X�g���N�^
	~TransitionScene();

	///	@brief	�V�[���J�ڗp�V�[���𐶐�����
	/// @param[in]	srcScene		: �J�ڌ��V�[��
	/// @param[in]	dstScene		: �J�ڐ�V�[��
	/// @param[in]	transFrameCount	: �J�ڂ܂ł̃t���[����
	static std::shared_ptr<Scene> Create(std::shared_ptr<Scene> srcScene,
		std::shared_ptr<Scene> dstScene,
		int transFrameCount);

	/// @brief	�X�V����
	std::shared_ptr<Scene> Update();

	///	@brief	�`�揈��
	void Draw() const;
protected:
	/* �ϐ���` */
	std::shared_ptr<Scene> mDstScene;	//!	�J�ڌ��V�[��
	std::shared_ptr<Scene> mSrcScene;	//!	�J�ڐ�V�[��
	int mTransFrameCnt;					//! �J�ڂ܂ł̃t���[����
	int mFrameCnt;						//! ���݂̃t���[����
	int mDstSceneGraphic;				//! �J�ڌ��V�[���̉摜���i�[����n���h��
	int mSrcSceneGraphic;				//! �J�ڐ�V�[���̉摜���i�[����n���h��


	/* ���[�J�����\�b�h��` */
	///	@brief	�R���X�g���N�^
	TransitionScene(std::shared_ptr<Scene> srcScene, std::shared_ptr<Scene> dstScene, int transFrameCnt);
};

