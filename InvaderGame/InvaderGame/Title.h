#pragma once
#include"Scene.h"
class Title : public  Scene {

private:

	int g_TitleImage; //�^�C�g���摜
	int Cr;
public:

	virtual void Update()  override;
	virtual void Draw() const  override;
	virtual Scene* ChangeScene()  override;

	//�e�N���X�̊֐����e���q�N���X�����߂Ă���

};