#pragma once

#include"CharaBase.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����B
class Enemy :public CharaBase {

private:

	int hp; //�̗�
	int point; //�_

public:

	Enemy();

public:
	//�`��ȊO�̍X�V����������
	CharaBase* Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw() const override;

	void Hit() override;

	int HpCheck();

	int GetPoint();


};

