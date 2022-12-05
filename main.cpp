#include "stdio.h"
#include <stdlib.h>


//01 typedef

typedef struct CELL
{
	int val;
	struct CELL* next;

}CELL;

void create(CELL *head,int val);

void index(CELL* head);

int main()
{
	int val;

	//02先頭セルを宣言
	CELL head;
	head.next=nullptr;
	head.val = 0;
	while (true)
	{
	//03入力
		printf("入力する値");
		scanf_s("%d", &val);
		create(&head, val);
	//04最後のセルを追加


		//05セル一覧を表示
		index(&head);
		printf("\n");
	}

	return 0;
}

void create(CELL* head, int val)
{
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));

	newCell->val = val;
	newCell->next = nullptr;

	while (head->next != nullptr)
	{
		head = head->next;
	}
	head->next = newCell;
}

void index(CELL* head)
{
	printf("入力された値一覧:[");
	while (head->next != nullptr)
	{
		head = head->next;
		printf("%d ", head->val);
	}
	printf("]\n\n\n");
}
