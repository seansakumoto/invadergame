#include"Dxlib.h"
#include"SceneManager.h"
#include"Title.h"

////// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	// タイトルを test に変更
	SetMainWindowText("INVADERS");
	//画面のサイズを1000×600にする
	SetGraphMode(1000, 600, 32);
	// ウィンドウモードで起動
	ChangeWindowMode(TRUE);		

	// DXライブラリの初期化処理
	if (DxLib_Init() == -1) return -1;	

	// 描画先画面を裏にする
	SetDrawScreen(DX_SCREEN_BACK);	
	SceneManeger* sceneManeger = new SceneManeger(new Title());//newとはメモリを確保する
		//シーン

		//ゲームループ
	while (ProcessMessage() == 0)
	{

		sceneManeger->Update();

		ClearDrawScreen(); //画面の初期化

		sceneManeger->Draw();

		ScreenFlip();//画面の裏画面の内容を表画面にする

		sceneManeger->ChangeScene();
	}

	DxLib_End();	// DXライブラリ使用の終了処理

	return 0;	// ソフトの終了
}

