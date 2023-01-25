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
	printf("選んでください。\n１:見逃す\n２:倒す\n");
	scanf_s("%d", &deadOrALive);

	switch (deadOrALive)
	{
	case 1:// 生きる
		Enemy::IsAlive = true;
		break;
	case 2:// 死ぬ
		Enemy::IsAlive = false;
		break;
	default:// 適当なのになったら死ぬ
		Enemy::IsAlive = false;
		break;
	}

	enemy->Update();
	enemy2->Update();
	enemy3->Update();
}

void GameScene::Draw() {

}