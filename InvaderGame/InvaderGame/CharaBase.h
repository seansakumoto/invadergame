#pragma once

#include"Scene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����B
class CharaBase {

private:

	int* g_Bullets[1]; //�e��
	int g_Speed; //�X�s�[�h

	//���@
	int Image; //�C���[�W�摜
	
	

public:

	CharaBase();

public:

	virtual CharaBase* Update() = 0;

	virtual void Draw()const = 0;

	virtual void Hit() = 0;






};

