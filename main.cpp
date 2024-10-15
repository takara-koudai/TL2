#include <cstdio>
#include <cstdlib>
#include <cassert>
#include "TextureConverter.h"
#include "Windows.h"

enum Argument
{
	kApplicationPath, //�A�v���P�[�V�����̃p�X
	kFilePath,        //�n���ꂽ�t�@�C���̃p�X

	NumArgument
};

int main(int argc,char* argv[])
{
	assert(argc >= NumArgument);

	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	TextureConverter textureConvereter;
	textureConvereter.ConvertTextureWICToDDS(argv[kFilePath]);

	CoUninitialize();

	system("pause");

	return 0;

}