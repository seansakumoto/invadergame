#pragma once

#include"CharaBase.h"
#include"Scene.h"


class Player : public CharaBase {

private:

	//int g_Score; //�X�R�A
	//int g_Life;  //���C�t


	//���@
	int g_PlayerImage; //�C���[�W�摜
	int g_Player_X;//�v���C���[X���W
	int g_Player_Y;//�v���C���[Y�摜



public:

	Player();

public:
	//�`��ȊO�̍X�V����������
	 CharaBase* Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	 void Draw() const override;

	void Hit() override;

	int  LifeCheck();

	int GetScore();


};