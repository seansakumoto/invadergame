#pragma once
class InputManeger
{
private:
	//キーの更新処理
	static char oldkey[256];//キーは、255あり終わりを追加する為にプラス１をする。
	static char nowkey[256];

private:
	//コンストラクタ
	InputManeger() = default;
	//用意されたものを使う
	//ヘッダーに処理を書きたくないときにdefaultを書く
public:
	static void Update();
	static bool KeyPressed(int inputKey);//ボタンが押されている時(押され続けている時)
	static bool KeyUp(int inputKey);//ボタンを離した時
	static bool KeyDown(int inputKey);//ボタンを押した瞬間の時
     
};

