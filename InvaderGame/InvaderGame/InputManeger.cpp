#include "InputManeger.h"
#include"DxLib.h"

char InputManeger::oldkey[256]; //‰Šú‰»
char InputManeger::nowkey[256];//“¯ã


void InputManeger::Update()
{
	for (int i = 0; i < 256; i++)
	{
		oldkey[i] = nowkey[i];
	}
	int ret = GetHitKeyStateAll(nowkey);//

	if (ret == -1)
	{
		//‚±‚±‚É—ˆ‚½‚çƒGƒ‰[

	}
}

bool InputManeger::KeyPressed(int inputKey)
{
	bool ret(nowkey[inputKey] == 1);
	return ret;
}

bool InputManeger::KeyUp(int inputKey)
{
	bool ret = ((nowkey[inputKey] == 0) && (oldkey[inputKey] == 1));
	return ret;
}

bool InputManeger::KeyDown(int inputKey)
{
	bool ret = ((nowkey[inputKey] == 1) && (oldkey[inputKey] == 0));
	return ret;
}
