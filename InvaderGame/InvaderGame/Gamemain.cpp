
#include "Gamemain.h"
#include"DxLib.h"

#include"InputManeger.h"
#include"Scene.h"
#include"Title.h"
#include"Player.h"


Gamemain::Gamemain()
{
	
	
	player = new Player();//クラスのデータを確保する


}

void Gamemain::Update()
{
	//ゲームメイン背景
	g_GamemainImage = LoadGraph("Image/gamemain.png");


	player->Update();


}

void Gamemain::Draw() const
{
	 //背景を描画する
	DrawGraph(0, 0, g_GamemainImage, FALSE);
	player->Draw();

}

Scene* Gamemain::ChangeScene()
{

	

	return this;//		自分自身のポインター 切り替えないならthisを返す
}



