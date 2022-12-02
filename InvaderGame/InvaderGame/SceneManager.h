#pragma once
#include"Scene.h"

class SceneManeger
{
private:
	Scene* m_Scene;

public:
	SceneManeger(Scene* scene);

public:
	void Update();
	void Draw() const;
	void ChangeScene();
};