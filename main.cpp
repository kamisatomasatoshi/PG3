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
	//���͎�t
	printf("�D���Ȑ�������͂��Ă�������\n");
	int inputnum;
	scanf_s("%d", &inputnum);

	//�҂�����
	int sec = 3;

	//�`��
	std::function<void()> Lottery = [=]() {rand() % 2 == inputnum ? printf("�\n") : printf("����\n"); };

	//�^�C���A�E�g
	std::function<void(std::function<void()>, int)> setTiomeOut = [](std::function<void()> fx, int sec) { fx(); Sleep(sec * 1000); };

	setTiomeOut(Lottery, sec);
}