#include "Enemy.h"
#include <stdio.h>
#include <stdlib.h>

bool Enemy::IsAlive=true;

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void Enemy::Initialize() {

}

void Enemy::Update()
{
	system("cls");
	if (IsAlive == true) {
		printf("敵は生きている\n");
	}
	else if (IsAlive == false) {
		printf("敵は倒された\n");
	}
}

void Enemy::Draw() {

}