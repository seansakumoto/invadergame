#pragma once
#include"Scene.h"
class Title : public  Scene {

private:

	int g_TitleImage; //タイトル画像
	int Cr;
public:

	virtual void Update()  override;
	virtual void Draw() const  override;
	virtual Scene* ChangeScene()  override;

	//親クラスの関数内容を子クラスが決めている

};