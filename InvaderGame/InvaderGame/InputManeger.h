#pragma once
class InputManeger
{
private:
	//�L�[�̍X�V����
	static char oldkey[256];//�L�[�́A255����I����ǉ�����ׂɃv���X�P������B
	static char nowkey[256];

private:
	//�R���X�g���N�^
	InputManeger() = default;
	//�p�ӂ��ꂽ���̂��g��
	//�w�b�_�[�ɏ��������������Ȃ��Ƃ���default������
public:
	static void Update();
	static bool KeyPressed(int inputKey);//�{�^����������Ă��鎞(�����ꑱ���Ă��鎞)
	static bool KeyUp(int inputKey);//�{�^���𗣂�����
	static bool KeyDown(int inputKey);//�{�^�����������u�Ԃ̎�
     
};

