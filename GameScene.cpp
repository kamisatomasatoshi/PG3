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
	printf("‘I‚ñ‚Å‚­‚¾‚³‚¢B\n‚P:Œ©“¦‚·\n‚Q:“|‚·\n");
	scanf_s("%d", &deadOrALive);

	switch (deadOrALive)
	{
	case 1:// ¶‚«‚é
		Enemy::IsAlive = true;
		break;
	case 2:// Ž€‚Ê
		Enemy::IsAlive = false;
		break;
	default:// “K“–‚È‚Ì‚É‚È‚Á‚½‚çŽ€‚Ê
		Enemy::IsAlive = false;
		break;
	}

	enemy->Update();
	enemy2->Update();
	enemy3->Update();
}

void GameScene::Draw() {

}