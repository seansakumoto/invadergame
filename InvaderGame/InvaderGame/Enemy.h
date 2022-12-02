#pragma once

#include"CharaBase.h"

//シーンマネージャークラス
//各シーンの切り替えを管理する。
class Enemy :public CharaBase {

private:

	int hp; //体力
	int point; //点

public:

	Enemy();

public:
	//描画以外の更新を実装する
	CharaBase* Update() override;

	//描画に関することを実装する
	void Draw() const override;

	void Hit() override;

	int HpCheck();

	int GetPoint();


};

