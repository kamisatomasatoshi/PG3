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
		printf("“G‚Í¶‚«‚Ä‚¢‚é\n");
	}
	else if (IsAlive == false) {
		printf("“G‚Í“|‚³‚ê‚½\n");
	}
}

void Enemy::Draw() {

}