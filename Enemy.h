#pragma once
class Enemy
{

public:
	//コンストラクタ
	Enemy();
	//デストラクタ
	~Enemy();

	//メンバ関数
	void Initialize();
	void Update();
	void Proximity();
	void Shooting();
	void Secession();

private:
	
	static void (Enemy::* pFunc[])();
	int phaseNum = 0;
};