#pragma once
#include <string>
#include "External/DirectXTex/DirectXTex.h"

class TextureConverter
{

public:

	//コンストラクタとデストラクタ
	TextureConverter();
	~TextureConverter();

	///<summary>
	///テクスチャをWICからDDSに変換する
	///</summary>
	///<param name = "filePath">ファイルパス</param>
	void ConvertTextureWICToDDS(const std::string& filepath);


private:

	/// <summary>
	/// テクスチャのファイル読み込み
	/// </summary>
	/// <param name="filepath">ファイルパス</param>
	void LoadWICTextureFromFile(const std::string& filepath);


	/// <summary>
	/// マルチバイト文字をワイド文字に変換する
	/// </summary>
	/// <param name="mString">マルチバイト文字列</param>
	/// <returns></returns>
	static std::wstring ConvertertMultiByteStringToWideString(const std::string& mString);

	/// <summary>
	/// フォルダとファイル名を分離する
	/// </summary>
	/// <param name="filePath">ファイルパス</param>
	void SeparateFilePath(const std::wstring& filePath);

	//ディレクトリパス
	std::wstring directoryPath_;
	//ファイル名
	std::wstring fileName_;
	//ファイル拡張子
	std::wstring fileExt_;

	DirectX::TexMetadata metadata_;
	DirectX::ScratchImage sctatchImage_;

	/// <summary>
	/// DDSテクスチャとしてファイルに書き出し
	/// </summary>
	void SaveDDSTextureToFile();

};

