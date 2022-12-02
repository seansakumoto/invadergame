#include"Title.h"
#include"DxLib.h"
#include"InputManeger.h"
#include"Gamemain.h"

int test = 0;


void Title::Update() {

	if (InputManeger::KeyDown(KEY_INPUT_RETURN))
	{
		test++;
	}

	if (InputManeger::KeyUp(KEY_INPUT_RETURN))
	{
		test = 0;
	}

	//タイトル画面の表示
	g_TitleImage = LoadGraph("Image/title.png");

	//色
	Cr = GetColor(255, 255, 255);
	

}

void Title::Draw()const {

	

	//タイトル画像表示
	DrawGraph(0, 0, g_TitleImage, FALSE);

	SetFontSize(40);
	DrawString(225, 350, "Zキーを押したらゲームスタート", Cr);


}


Scene* Title::ChangeScene()
{
	if (InputManeger::KeyPressed(KEY_INPUT_Z))//ボタンを押されたら次のシーンを返す
	{
		return new Gamemain();//ゲームメインに移行する
	}

	return this;//		自分自身のポインター 切り替えないならthisを返す
}











