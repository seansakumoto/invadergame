#pragma once

#include"Scene.h"


class BulletsBase {

private:
	int damage; //玉のダメージ
	int spped; //玉のスピード

public:

	virtual ~BulletsBase() {};

	virtual Scene* Update() = 0;

	virtual void Draw()const = 0;

	int GetDamage();

	
};


