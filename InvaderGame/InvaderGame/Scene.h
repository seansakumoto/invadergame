#pragma once
class  Scene
{


public:
	//親クラス
	virtual void Update() = 0;
	virtual void Draw() const = 0;
	virtual Scene* ChangeScene() = 0;

	//親の関数のデータを読むためにヴァーチャルを付ける。
	//親クラスの０（ゼロ）は関数のプロトタイプ宣言
	//子クラスの｛｝(波のかっこ)は関数の定義。

	//public（パブリック）どこでも使える
	//protected（プロテクト）子クラス限定
	//private(プライベート)誰にも渡さない

};