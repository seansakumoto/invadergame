#pragma once

#include"CharaBase.h"
#include"Scene.h"


class Player : public CharaBase {

private:

	//int g_Score; //スコア
	//int g_Life;  //ライフ


	//自機
	int g_PlayerImage; //イメージ画像
	int g_Player_X;//プレイヤーX座標
	int g_Player_Y;//プレイヤーY画像



public:

	Player();

public:
	//描画以外の更新を実装する
	 CharaBase* Update() override;

	//描画に関することを実装する
	 void Draw() const override;

	void Hit() override;

	int  LifeCheck();

	int GetScore();


};