#include"Player.h"
#include"DxLib.h"
#include"Scene.h"
#include"CharaBase.h"
#include"SceneManager.h"
#include"InputManeger.h"


Player::Player()
{
	g_Player_X = 475;
	g_Player_Y = 450;
	g_PlayerImage;
	g_PlayerImage = LoadGraph("Image/player.png");
	

}

CharaBase* Player::Update()
{

	//// ÉLÅ[Ç≈à⁄ìÆÇ≥ÇπÇÈ
	//if (ret & PAD_INPUT_RIGHT)
	//{
	//	g_Player_X += 2;
	//}
	//if (ret & PAD_INPUT_LEFT)
	//{
	//	g_Player_Y-= 2;
	//}

	if (InputManeger::KeyPressed(KEY_INPUT_RIGHT))
	{
		
		g_Player_X += 3;
	}

	if (InputManeger::KeyPressed(KEY_INPUT_LEFT))
	{
		g_Player_X -= 3;
	}



	return this;

}

void Player::Draw() const
{
	DrawGraph(g_Player_X,g_Player_Y, g_PlayerImage, FALSE);
}

void Player::Hit()
{

}

