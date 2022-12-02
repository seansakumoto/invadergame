#pragma once

#include"Scene.h"
#include"Player.h"
#include"Enemy.h"
//シーンマネージャークラス
//各シーンの切り替えを管理する。
class Gamemain : public Scene {

private:

	

	Player* player;
	//Enemy* Enemy;
	int g_GamemainImage;

	
	

public:
	Gamemain();

public:
	void Update() override;
	void Draw() const override;
	Scene* ChangeScene() override;




};
