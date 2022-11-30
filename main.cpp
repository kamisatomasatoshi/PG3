#include <Windows.h>
#include <functional>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int GetRand()
{
	return rand();
}


int main()
{
	//入力受付
	printf("好きな数字を入力してください\n");
	int inputnum;
	scanf_s("%d", &inputnum);

	//待ち時間
	int sec = 3;

	//描画
	std::function<void()> Lottery = [=]() {rand() % 2 == inputnum ? printf("奇数\n") : printf("偶数\n"); };

	//タイムアウト
	std::function<void(std::function<void()>, int)> setTiomeOut = [](std::function<void()> fx, int sec) { fx(); Sleep(sec * 1000); };

	setTiomeOut(Lottery, sec);
}