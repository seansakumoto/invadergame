#pragma once

#include"Scene.h"


class BulletsBase {

private:
	int damage; //�ʂ̃_���[�W
	int spped; //�ʂ̃X�s�[�h

public:

	virtual ~BulletsBase() {};

	virtual Scene* Update() = 0;

	virtual void Draw()const = 0;

	int GetDamage();

	
};


