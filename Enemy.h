#pragma once
class Enemy
{
public:
	//コンストラクタ
	Enemy();
	//デストラクタ
	~Enemy();

	//メンバ関数
	// 初期化
	void Initialize();

	// アップデート
	void Update();

	// 描画処理
	void Draw();

public:
	//静的メンバ変数
	static bool IsAlive;
};