#pragma once

#include"AbstractScene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����B
class Gamemain : public AdstractScene {

private:

	int* player; //�v���C���[
	int* enemy[2]; //�G

public:


	Gamemain();

	virtual ~Gamemain() {};

	//�`��ȊO�̍X�V����������
	virtual AdstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const override;

	void HitCheck(); //�����蔻��ɂ���
};
