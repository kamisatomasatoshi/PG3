#include "Enemy.h"
#include <stdio.h>


//�R���X�g���N�^
Enemy::Enemy()
{
	phaseNum = 0;
}
//�f�X�g���N�^
Enemy::~Enemy()
{
}

void Enemy::Initialize()
{
	phaseNum = 0;
}

void Enemy::Update()
{
	(this->*pFunc[phaseNum])();
	phaseNum++;
	if (phaseNum > 2) {
		phaseNum = 0;
	}
}

void Enemy::Proximity()
{
	printf("�ڋ�\n");
}

void Enemy::Shooting()
{
	printf("�U��\n");
}

void Enemy::Secession()
{
	printf("���E\n");
}

void (Enemy::* Enemy::pFunc[])() = 
{
		&Enemy::Proximity, // �ڋ� 0
		&Enemy::Shooting,  // �U�� 1
		&Enemy::Secession,  // ���E 2
		
};