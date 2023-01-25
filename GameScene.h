#pragma once
#include <stdio.h>
#include "Enemy.h"

class GameScene
{

public:
	//�R���X�g���N�^
	GameScene();
	//�f�X�g���N�^
	~GameScene();
	

	//�����o�֐�
	void Initialize();
	void Update();
	void Draw();
private:
	//�����o�ϐ�
	Enemy* enemy = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	int deadOrALive = 0;

};
