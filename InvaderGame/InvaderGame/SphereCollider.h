#pragma once

#include"Scene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����B
class SphereCollider{

private:

	int Loacation; //���S���W
	int Radius; //���a

public:


	//SphereCollider();

	virtual ~SphereCollider() {};


	int HitSphere(int);

	int GetLocation();

	void SetLocation();

	
};
