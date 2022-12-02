#pragma once

#include"Scene.h"

//シーンマネージャークラス
//各シーンの切り替えを管理する。
class SphereCollider{

private:

	int Loacation; //中心座標
	int Radius; //半径

public:


	//SphereCollider();

	virtual ~SphereCollider() {};


	int HitSphere(int);

	int GetLocation();

	void SetLocation();

	
};
