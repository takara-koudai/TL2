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
	//1.テクスチャファイルを読み込む
	LoadWICTextureFromFile(filepath);


	//2.DDS形式に変換して書き出す

}

void TextureConverter::LoadWICTextureFromFile(const std::string& filepath)
{
	//1.ファイルパスをワイド文字に変換
	std::wstring wfilePath = ConvertertMultiByteStringToWideString(filepath);

	//2.テクスチャを読み込む


}

std::wstring TextureConverter::ConvertertMultiByteStringToWideString(const std::string& mString)
{
	//ワイド文字列に変換した際の文字数を計算
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	//ワイド文字列
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//ワイド文字列に変換
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}


