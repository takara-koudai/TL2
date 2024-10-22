#pragma once
#include <string>
#include "External/DirectXTex/DirectXTex.h"

class TextureConverter
{

public:

	//�R���X�g���N�^�ƃf�X�g���N�^
	TextureConverter();
	~TextureConverter();

	///<summary>
	///�e�N�X�`����WIC����DDS�ɕϊ�����
	///</summary>
	///<param name = "filePath">�t�@�C���p�X</param>
	void ConvertTextureWICToDDS(const std::string& filepath);


private:

	/// <summary>
	/// �e�N�X�`���̃t�@�C���ǂݍ���
	/// </summary>
	/// <param name="filepath">�t�@�C���p�X</param>
	void LoadWICTextureFromFile(const std::string& filepath);


	/// <summary>
	/// �}���`�o�C�g���������C�h�����ɕϊ�����
	/// </summary>
	/// <param name="mString">�}���`�o�C�g������</param>
	/// <returns></returns>
	static std::wstring ConvertertMultiByteStringToWideString(const std::string& mString);

	/// <summary>
	/// �t�H���_�ƃt�@�C�����𕪗�����
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void SeparateFilePath(const std::wstring& filePath);

	//�f�B���N�g���p�X
	std::wstring directoryPath_;
	//�t�@�C����
	std::wstring fileName_;
	//�t�@�C���g���q
	std::wstring fileExt_;

	DirectX::TexMetadata metadata_;
	DirectX::ScratchImage sctatchImage_;

	/// <summary>
	/// DDS�e�N�X�`���Ƃ��ăt�@�C���ɏ����o��
	/// </summary>
	void SaveDDSTextureToFile();

};

