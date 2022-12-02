#include"Dxlib.h"
#include"SceneManager.h"
#include"Title.h"

////// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	// �^�C�g���� test �ɕύX
	SetMainWindowText("INVADERS");
	//��ʂ̃T�C�Y��1000�~600�ɂ���
	SetGraphMode(1000, 600, 32);
	// �E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);		

	// DX���C�u�����̏���������
	if (DxLib_Init() == -1) return -1;	

	// �`����ʂ𗠂ɂ���
	SetDrawScreen(DX_SCREEN_BACK);	
	SceneManeger* sceneManeger = new SceneManeger(new Title());//new�Ƃ̓��������m�ۂ���
		//�V�[��

		//�Q�[�����[�v
	while (ProcessMessage() == 0)
	{

		sceneManeger->Update();

		ClearDrawScreen(); //��ʂ̏�����

		sceneManeger->Draw();

		ScreenFlip();//��ʂ̗���ʂ̓��e��\��ʂɂ���

		sceneManeger->ChangeScene();
	}

	DxLib_End();	// DX���C�u�����g�p�̏I������

	return 0;	// �\�t�g�̏I��
}

