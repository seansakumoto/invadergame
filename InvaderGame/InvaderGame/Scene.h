#pragma once
class  Scene
{


public:
	//�e�N���X
	virtual void Update() = 0;
	virtual void Draw() const = 0;
	virtual Scene* ChangeScene() = 0;

	//�e�̊֐��̃f�[�^��ǂނ��߂Ƀ��@�[�`������t����B
	//�e�N���X�̂O�i�[���j�͊֐��̃v���g�^�C�v�錾
	//�q�N���X�́o�p(�g�̂�����)�͊֐��̒�`�B

	//public�i�p�u���b�N�j�ǂ��ł��g����
	//protected�i�v���e�N�g�j�q�N���X����
	//private(�v���C�x�[�g)�N�ɂ��n���Ȃ�

};