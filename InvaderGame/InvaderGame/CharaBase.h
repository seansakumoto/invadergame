#pragma once

#include"Scene.h"

//シーンマネージャークラス
//各シーンの切り替えを管理する。
class CharaBase {

private:

	int* g_Bullets[1]; //弾丸
	int g_Speed; //スピード

	//自機
	int Image; //イメージ画像
	
	

public:

	CharaBase();

public:

	virtual CharaBase* Update() = 0;

	virtual void Draw()const = 0;

	virtual void Hit() = 0;






};

