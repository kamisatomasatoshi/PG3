#include "stdio.h"
#include <stdlib.h>
#include "windows.h"

typedef void (*PFunc)(int*);

//�R�[���o�b�N�֐��P
void yes(int* s)
{
	printf("������IBIGBONUS\n", *s);
}

void no(int* s)
{
	printf("�͂���\n", *s);
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
	printf("�����Ȃ�1����͂��Ă�������\n");
	printf("��Ȃ�-1����͂��Ă�������\n");
	printf("%d\n",r);
	scanf_s("%d", &anser);
	//���͂�����
	if (anser == 1)
	{
		//�����_���̌��ʂ������Ȃ�
		if (r == 0)
		{
			p = yes;
		}
		else
		{
			p = no;
		}
		printf("�I�񂾎�͋���\n");
	}
	//���͂��
	else if (anser == -1)
	{
		//�����_���̌��ʊ�Ȃ�
		if (r == 1)
		{
			p = yes;
		}
		else
		{
			p = no;
		}
		printf("�I�񂾎�͊\n");

	}


	

	
	setTimeout(p, 3);




	return 0;
}