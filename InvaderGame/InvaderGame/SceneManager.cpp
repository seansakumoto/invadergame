#include"SceneManager.h"
#include"InputManeger.h"

SceneManeger::SceneManeger(Scene* scene) //コンスラクタのここで、最初のシーンを呼び出している
{
	m_Scene = scene;
}

void SceneManeger::Update()  //アップデート（更新）
{
	InputManeger::Update();
	m_Scene->Update();
}

void SceneManeger::Draw()const //今のシーンを描画している
{
	m_Scene->Draw();
}

void SceneManeger::ChangeScene() //次の画面に移動する
{
	Scene* next = m_Scene->ChangeScene();//nextで新しいシーンを受け取って!=(ノットイコール)でシーンは同じですかと判断し違うシーンであれば新しいシーンに移動する　　　　 Scene* nexr(次のシーン) =m_Scene(現在のシーン)->(アクセスシテ―ジ)ChangeSceneを見て
	if (next != m_Scene) //次のシーンか今のシーンか判断してして違れば下の処理に移動する
	{
		delete m_Scene;// 前のシーンをデリートで消す
		m_Scene = next; //次のシーンに移動する
	}
}
