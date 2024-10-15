#pragma once
#include <string>

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


};

