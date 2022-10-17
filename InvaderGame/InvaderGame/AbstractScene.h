#pragma once

//�f�t�H���g�̒��ۃV�[���N���X
//���[�U�[�͂�����p�����ăV�[������������Ɗy
class AdstractScene {

public:
	//�f�X�g���N�^
	virtual ~AdstractScene() {};

	//�`��ȊO�̍X�V����������
	virtual AdstractScene* Update() = 0;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const = 0;
};
