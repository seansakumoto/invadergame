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

	//�^�C�g����ʂ̕\��
	g_TitleImage = LoadGraph("Image/title.png");

	//�F
	Cr = GetColor(255, 255, 255);
	

}

void Title::Draw()const {

	

	//�^�C�g���摜�\��
	DrawGraph(0, 0, g_TitleImage, FALSE);

	SetFontSize(40);
	DrawString(225, 350, "Z�L�[����������Q�[���X�^�[�g", Cr);


}


Scene* Title::ChangeScene()
{
	if (InputManeger::KeyPressed(KEY_INPUT_Z))//�{�^���������ꂽ�玟�̃V�[����Ԃ�
	{
		return new Gamemain();//�Q�[�����C���Ɉڍs����
	}

	return this;//		�������g�̃|�C���^�[ �؂�ւ��Ȃ��Ȃ�this��Ԃ�
}











