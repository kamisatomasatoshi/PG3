#include "Enemy.h"
#include <stdio.h>


//コンストラクタ
Enemy::Enemy()
{
	phaseNum = 0;
}
//デストラクタ
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
	printf("接近\n");
}

void Enemy::Shooting()
{
	printf("攻撃\n");
}

void Enemy::Secession()
{
	printf("離脱\n");
}

void (Enemy::* Enemy::pFunc[])() = 
{
		&Enemy::Proximity, // 接近 0
		&Enemy::Shooting,  // 攻撃 1
		&Enemy::Secession,  // 離脱 2
		
};