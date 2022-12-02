#include"SceneManager.h"
#include"InputManeger.h"

SceneManeger::SceneManeger(Scene* scene) //�R���X���N�^�̂����ŁA�ŏ��̃V�[�����Ăяo���Ă���
{
	m_Scene = scene;
}

void SceneManeger::Update()  //�A�b�v�f�[�g�i�X�V�j
{
	InputManeger::Update();
	m_Scene->Update();
}

void SceneManeger::Draw()const //���̃V�[����`�悵�Ă���
{
	m_Scene->Draw();
}

void SceneManeger::ChangeScene() //���̉�ʂɈړ�����
{
	Scene* next = m_Scene->ChangeScene();//next�ŐV�����V�[�����󂯎����!=(�m�b�g�C�R�[��)�ŃV�[���͓����ł����Ɣ��f���Ⴄ�V�[���ł���ΐV�����V�[���Ɉړ�����@�@�@�@ Scene* nexr(���̃V�[��) =m_Scene(���݂̃V�[��)->(�A�N�Z�X�V�e�\�W)ChangeScene������
	if (next != m_Scene) //���̃V�[�������̃V�[�������f���Ă��Ĉ��Ή��̏����Ɉړ�����
	{
		delete m_Scene;// �O�̃V�[�����f���[�g�ŏ���
		m_Scene = next; //���̃V�[���Ɉړ�����
	}
}
