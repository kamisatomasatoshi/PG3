#include "stdio.h"
#include <stdlib.h>
#include <string.h>

enum 
{
	INIT,
	INDEX,
	INSERT,
	DELETE
};

typedef struct CELL
{
	char val[64];
	struct CELL* next;

}CELL;

void Init(int &operationNumber);
void Index(int& operationNumber, CELL& head);
void Insert(int& operationNumber, CELL& head);
void Delete(int& operationNumber, CELL& head);

int main()
{
	int operationNumber = INIT;
	while (true)
	{


		switch (operationNumber)
		{
		case INIT://�������

			Init(operationNumber);
		

			break;


		case INDEX:
			Index(operationNumber, &head);

			break;


		case INSERT:
			Insert(operationNumber,&head);

			break;
		case DELETE:

			Delete(operationNumber,&head);
			break;


		}

	}



	return 0;
}

void Init(int& operationNumber)
{
	printf("[�v�f�̑���]\n");
	printf("1 , �v�f�̈ꗗ\n");
	printf("2 , �Ō���̗v�f�̑}��\n\n");
	printf("3 , �Ō���̗v�f���폜\n\n");
	printf("---------------------------------------\n");

	printf("�����I�����Ă�������\n");
	scanf_s("%d", &operationNumber);
	printf("\n");
}

void Index(int& operationNumber, CELL* head)
{
	int id = 0;
	int count = 0;
	printf("1 , �v�f�̈ꗗ\n");
	if (head->next != nullptr)
	{
		while (head->next != nullptr)
		{
			head = head->next;
			count++;
		}
		printf("�v�f��: %d\n", count);
		printf("�v�f�ꗗ: [\n", count);

	}
	else
	{
		printf("���͂���Ă���Z��������܂���\n");
	}
	printf("---------------------------------------\n");

	printf("0, ������ʂɖ߂�\n");
	scanf_s("%d", &operationNumber);
	printf("\n");
}

void Insert(int& operationNumber, CELL& head)
{

	char  inputVal[64] = "";
	printf("�v�f�̑}��\n");
	printf("�ǉ����鑊�]�̒l�����\n");
	printf("����:");
	scanf_s("%d", &inputVal);
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	
	strcpy_s(newCell->val,64, inputVal);

}

void Delete(int& operationNumber, CELL& head) 
{

}
