#pragma once

//デフォルトの抽象シーンクラス
//ユーザーはこれを継承してシーンを実装すると楽
class AdstractScene {

public:
	//デストラクタ
	virtual ~AdstractScene() {};

	//描画以外の更新を実装する
	virtual AdstractScene* Update() = 0;

	//描画に関することを実装する
	virtual void Draw() const = 0;
};
