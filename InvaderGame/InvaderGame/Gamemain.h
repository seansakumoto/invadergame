#pragma once

#include"Scene.h"
#include"Player.h"
#include"Enemy.h"
//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����B
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
