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

	//02�擪�Z����錾
	CELL head;
	head.next=nullptr;
	head.val = 0;
	while (true)
	{
	//03����
		printf("���͂���l");
		scanf_s("%d", &val);
		create(&head, val);
	//04�Ō�̃Z����ǉ�


		//05�Z���ꗗ��\��
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
	printf("���͂��ꂽ�l�ꗗ:[");
	while (head->next != nullptr)
	{
		head = head->next;
		printf("%d ", head->val);
	}
	printf("]\n\n\n");
}
