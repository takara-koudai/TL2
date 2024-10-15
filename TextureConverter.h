#pragma once
#include <string>

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


};

