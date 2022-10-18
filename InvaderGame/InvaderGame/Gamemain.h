#pragma once

#include"AbstractScene.h"

//シーンマネージャークラス
//各シーンの切り替えを管理する。
class Gamemain : public AdstractScene {

private:

	int* player; //プレイヤー
	int* enemy[2]; //敵

public:


	Gamemain();

	virtual ~Gamemain() {};

	//描画以外の更新を実装する
	virtual AdstractScene* Update() override;

	//描画に関することを実装する
	virtual void Draw() const override;

	void HitCheck(); //当たり判定について
};
