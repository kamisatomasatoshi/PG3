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
		case INIT://初期画面

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
	printf("[要素の操作]\n");
	printf("1 , 要素の一覧\n");
	printf("2 , 最後尾の要素の挿入\n\n");
	printf("3 , 最後尾の要素を削除\n\n");
	printf("---------------------------------------\n");

	printf("操作を選択してください\n");
	scanf_s("%d", &operationNumber);
	printf("\n");
}

void Index(int& operationNumber, CELL* head)
{
	int id = 0;
	int count = 0;
	printf("1 , 要素の一覧\n");
	if (head->next != nullptr)
	{
		while (head->next != nullptr)
		{
			head = head->next;
			count++;
		}
		printf("要素数: %d\n", count);
		printf("要素一覧: [\n", count);

	}
	else
	{
		printf("入力されているセルがありません\n");
	}
	printf("---------------------------------------\n");

	printf("0, 初期画面に戻る\n");
	scanf_s("%d", &operationNumber);
	printf("\n");
}

void Insert(int& operationNumber, CELL& head)
{

	char  inputVal[64] = "";
	printf("要素の挿入\n");
	printf("追加する相曽の値を入力\n");
	printf("入力:");
	scanf_s("%d", &inputVal);
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	
	strcpy_s(newCell->val,64, inputVal);

}

void Delete(int& operationNumber, CELL& head) 
{

}
