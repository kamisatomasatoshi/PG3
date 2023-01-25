#include "GameScene.h"
#include <stdlib.h>

GameScene::GameScene()
{
}

GameScene::~GameScene()
{
	delete enemy;
	delete enemy2;
	delete enemy3;
}

void GameScene::Initialize()
{
	enemy->Initialize();
	enemy2->Initialize();
	enemy3->Initialize();
}

void GameScene::Update()
{
	system("cls");
	printf("�I��ł��������B\n�P:������\n�Q:�|��\n");
	scanf_s("%d", &deadOrALive);

	switch (deadOrALive)
	{
	case 1:// ������
		Enemy::IsAlive = true;
		break;
	case 2:// ����
		Enemy::IsAlive = false;
		break;
	default:// �K���Ȃ̂ɂȂ����玀��
		Enemy::IsAlive = false;
		break;
	}

	enemy->Update();
	enemy2->Update();
	enemy3->Update();
}

void GameScene::Draw() {

}