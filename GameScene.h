#pragma once
#include <stdio.h>
#include "Enemy.h"

class GameScene
{

public:
	//コンストラクタ
	GameScene();
	//デストラクタ
	~GameScene();
	

	//メンバ関数
	void Initialize();
	void Update();
	void Draw();
private:
	//メンバ変数
	Enemy* enemy = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	int deadOrALive = 0;

};
