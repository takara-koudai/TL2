#include "TextureConverter.h"
#include <Windows.h>

TextureConverter::~TextureConverter()
{

}

TextureConverter::TextureConverter()
{

}

void TextureConverter::ConvertTextureWICToDDS(const std::string& filepath)
{
	//1.�e�N�X�`���t�@�C����ǂݍ���
	LoadWICTextureFromFile(filepath);


	//2.DDS�`���ɕϊ����ď����o��

}

void TextureConverter::LoadWICTextureFromFile(const std::string& filepath)
{
	//1.�t�@�C���p�X�����C�h�����ɕϊ�
	std::wstring wfilePath = ConvertertMultiByteStringToWideString(filepath);

	//2.�e�N�X�`����ǂݍ���


}

std::wstring TextureConverter::ConvertertMultiByteStringToWideString(const std::string& mString)
{
	//���C�h������ɕϊ������ۂ̕��������v�Z
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	//���C�h������
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//���C�h������ɕϊ�
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}


