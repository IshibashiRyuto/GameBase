/*
*	@file	SoundManager.h
*	@brief	���y�Đ��֘A���Ǘ�����N���X���L�q����
*	@author	Ishibashi Ryuto
*	@date	2018/10/29	���ō쐬
*/
#pragma once
/* �w�b�_�C���N���[�h */
#include <string>
#include <map>

/// @class	SoundManager
///	@brief	���y�Đ��֘A���Ǘ�����N���X
///
///	���y�̓Ǎ��A�Đ����Ǘ�����N���X
/// �V���O���g���ō쐬����
class SoundManager
{
public:
	///	@brief	�R���X�g���N�^
	SoundManager();
	/// @brief	�f�X�g���N�^
	~SoundManager();

	///	@brief		�����t�@�C����ǂݍ���
	/// @param[in]	filePath		: �t�@�C���p�X
	///	@retval		�ǂݍ��ݐ���	: �����t�@�C���n���h��
	/// @retval		�ǂݍ��ݎ��s	: -1
	int Load(std::string filePath);

	/// @brief		�����t�@�C����BGM�Ƃ��čĐ�����
	///	@param[in]	soundHandle		: �����t�@�C���n���h��
	///	@retval		�Đ�����		: true
	///	@retval		�Đ����s		: false
private:
	std::map<std::string, int> mSoundLoadMap;	//!	�ǂݍ��ݍς݃T�E���h�̊Ǘ��p
};

