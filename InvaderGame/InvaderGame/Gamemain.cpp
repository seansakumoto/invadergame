
#include "Gamemain.h"
#include"DxLib.h"

#include"InputManeger.h"
#include"Scene.h"
#include"Title.h"
#include"Player.h"


Gamemain::Gamemain()
{
	
	
	player = new Player();//�N���X�̃f�[�^���m�ۂ���


}

void Gamemain::Update()
{
	//�Q�[�����C���w�i
	g_GamemainImage = LoadGraph("Image/gamemain.png");


	player->Update();


}

void Gamemain::Draw() const
{
	 //�w�i��`�悷��
	DrawGraph(0, 0, g_GamemainImage, FALSE);
	player->Draw();

}

Scene* Gamemain::ChangeScene()
{

	

	return this;//		�������g�̃|�C���^�[ �؂�ւ��Ȃ��Ȃ�this��Ԃ�
}



