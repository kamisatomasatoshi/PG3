#include "stdio.h"
#include <stdlib.h>
#include "windows.h"

typedef void (*PFunc)(int*);

//コールバック関数１
void yes(int* s)
{
	printf("あたり！BIGBONUS\n", *s);
}

void no(int* s)
{
	printf("はずれ\n", *s);
}

void setTimeout(PFunc p, int second)
{

	Sleep(second * 1000);

	p(&second);
}
int anser = 0;
int main()
{
	PFunc p;
	p = yes;
	int r = rand() % 6 + 1;
	r = r % 2;
	
	printf("start\n");
	printf("偶数なら1を入力してください\n");
	printf("奇数なら-1を入力してください\n");
	printf("%d\n",r);
	scanf_s("%d", &anser);
	//入力が偶数
	if (anser == 1)
	{
		//ランダムの結果が偶数なら
		if (r == 0)
		{
			p = yes;
		}
		else
		{
			p = no;
		}
		printf("選んだ手は偶数\n");
	}
	//入力が奇数
	else if (anser == -1)
	{
		//ランダムの結果奇数なら
		if (r == 1)
		{
			p = yes;
		}
		else
		{
			p = no;
		}
		printf("選んだ手は奇数\n");

	}


	

	
	setTimeout(p, 3);




	return 0;
}