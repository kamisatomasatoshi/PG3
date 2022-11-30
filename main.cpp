#include<stdio.h>
#include<stdlib.h>

//�o�������X�g�̍\���̂̒�`
typedef struct cell {
	int val;

	struct cell* prev;

	struct cell* next;

}CELL;

void create(CELL* currentCell, int val); //�v���g�^�C�v�錾
void index(CELL* endCell);
CELL* getInsertCellAddress(CELL* endCELL, int iterator);

int main()
{
	int iterator;
	int inputValue;
	CELL* insertCell;

	CELL head;
	head.next = nullptr;

	while (1)
	{
		printf("���Ԗڂ̃Z���̌��ɑ}�����܂����H\n");
		scanf_s("%d", &iterator);

		printf("�}������l����͂��Ă�������\n");
		scanf_s("%d", &inputValue);

		//�C�ӂ̃Z���̌��ɒǉ�
		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, inputValue);

		//���X�g�̈ꗗ�̕\��
		index(&head);
	}
	return 0;
}

void create(CELL* currentCell, int val) {
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	if (currentCell->next) {
		CELL* newCell = currentCell->next;
		newCell->prev = newCell;
	}
	currentCell->next = newCell;
}


void index(CELL* endCell) {
	int no = 1;
	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d ", no);
		printf("%p ", endCell->prev);
		printf("%5d ", endCell->val);
		printf("(%p) ", endCell);
		printf("%p\n ", endCell->next);
		no++;
	}

}

CELL* getInsertCellAddress(CELL* endCELL, int iterator) {
	for (int i = 0; i < iterator; i++) {
		if (endCELL->next) {
			endCELL = endCELL->next;
		}
		else {
			break;
		}
	}
	return endCELL;
}