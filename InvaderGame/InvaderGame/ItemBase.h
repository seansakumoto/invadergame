#pragma once
#include"Scene.h"

class ItemBase{

private:

	int speed;
	int type;

public:

	virtual ~ItemBase() {};

	virtual Scene* Update() = 0;

	virtual void Draw()const = 0;

	int Gettyoe(void);

};