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
		case INIT://‰Šú‰æ–Ê

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
	printf("[—v‘f‚Ì‘€ì]\n");
	printf("1 , —v‘f‚Ìˆê——\n");
	printf("2 , ÅŒã”ö‚Ì—v‘f‚Ì‘}“ü\n\n");
	printf("3 , ÅŒã”ö‚Ì—v‘f‚ðíœ\n\n");
	printf("---------------------------------------\n");

	printf("‘€ì‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &operationNumber);
	printf("\n");
}

void Index(int& operationNumber, CELL* head)
{
	int id = 0;
	int count = 0;
	printf("1 , —v‘f‚Ìˆê——\n");
	if (head->next != nullptr)
	{
		while (head->next != nullptr)
		{
			head = head->next;
			count++;
		}
		printf("—v‘f”: %d\n", count);
		printf("—v‘fˆê——: [\n", count);

	}
	else
	{
		printf("“ü—Í‚³‚ê‚Ä‚¢‚éƒZƒ‹‚ª‚ ‚è‚Ü‚¹‚ñ\n");
	}
	printf("---------------------------------------\n");

	printf("0, ‰Šú‰æ–Ê‚É–ß‚é\n");
	scanf_s("%d", &operationNumber);
	printf("\n");
}

void Insert(int& operationNumber, CELL& head)
{

	char  inputVal[64] = "";
	printf("—v‘f‚Ì‘}“ü\n");
	printf("’Ç‰Á‚·‚é‘Š‘]‚Ì’l‚ð“ü—Í\n");
	printf("“ü—Í:");
	scanf_s("%d", &inputVal);
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	
	strcpy_s(newCell->val,64, inputVal);

}

void Delete(int& operationNumber, CELL& head) 
{

}
