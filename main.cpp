#include <iostream>
#include"List.h"
#include<string>
using namespace std;

template<typename T>
void Display(Mylist<T>& list, int& operationNum, int& displayOperationNum)
{
	cout << "[—v‘f‚Ì•\¦]" << endl;
	cout << "1.—v‘f‚Ìˆê——•\¦" << endl;
	cout << "2.‡”Ô‚ğw’è‚µ‚Ä—v‘f‚ğ•\¦" << endl;
	cout << "9.—v‘f‘€ì‚É–ß‚é" << endl;
	cout << endl;
	cout << "‘€ì‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢" << endl;

	//‘€ì”Ô†‚ğæ“¾
	cin >> displayOperationNum;
	system("cls");

	switch (displayOperationNum)
	{
	case 1:
		cout << "[—v‘f‚Ìˆê——•\¦]" << endl;

		//ˆê——•\¦
		list.Dump();

		cout << "—v‘f”:" << list.Size() << endl;

		break;
	case 2:
		cout << "[‡”Ô‚ğw’è‚µ‚Ä—v‘f‚ğ•\¦]" << endl;
		cout << "•\¦‚µ‚½‚¢—v‘f‚Ì‡”Ô‚ğw’è‚µ‚Ä‚­‚¾‚³‚¢B" << endl;

		//w’è‚·‚é”Ô†‚ğæ“¾
		int specifyNum;
		cin >> specifyNum;
		cout << endl;

		//w’è‚µ‚Ä•\¦
		list.SpecifyElement(specifyNum);

		break;

	case 9:
		operationNum = 0;
		break;
	}

	//—v‘f‘€ì‚É–ß‚ç‚È‚©‚Á‚½‚ç
	if (displayOperationNum == 1 || displayOperationNum == 2)
	{
		cout << endl;
		cout << "----------------------------------" << endl;
		cout << "1.—v‘f‚Ì•\¦‚É–ß‚é" << endl;
		cout << "9.—v‘f‚Ì‘€ì‚É–ß‚é" << endl;

		//‘€ì”Ô†‚ğæ“¾
		std::cin >> displayOperationNum;

		system("cls");
		switch (displayOperationNum)
		{
		case 1:
			operationNum = 1;
			break;
		case 2:
			operationNum = 0;
			break;
		default:
			break;
		}
	}
}

template<typename T>
void Insert(Mylist<T>& list, int& operationNum)
{
	cout << "[ƒŠƒXƒg—v‘f‚Ì‘}“ü]" << endl;
	cout << endl;
	cout << "—v‘f‚ğ’Ç‰ÁêŠ‚ğw’è‚µ‚Ä‚­‚¾‚³‚¢BÅŒã”ö‚É’Ç‰Á‚·‚éê‡‚Í‰½‚à“ü—Í‚µ‚È‚¢‚Å‚­‚¾‚³‚¢B" << endl;

	string insertNum;
	while (std::getchar() != '\n');

	getline(std::cin, insertNum);

	if (insertNum == "")
	{
		cout << "’Ç‰Á‚·‚é—v‘f‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
		T element{};

		cin >> element;

		list.PushBack(element);

		cout << "—v‘f" << element << "‚ª" << "ÅŒã”ö‚É‘}“ü‚³‚ê‚Ü‚µ‚½" << endl;
	}
	else
	{
		int index = atoi(insertNum.c_str());

		cout << "’Ç‰Á‚·‚é—v‘f‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
		T element{};

		cin >> element;

		list.Insert(element, index);

		cout << "—v‘f" << element << "‚ª" << index << "”Ô–Ú‚É‘}“ü‚³‚ê‚Ü‚µ‚½" << endl;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.—v‘f‘€ì‚É–ß‚é" << endl;

	cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 2;
	}
}

template<typename T>
void Edit(Mylist<T>& list, int& operationNum)
{
	cout << "[—v‘f‚Ì•ÒW]" << endl;
	cout << endl;
	cout << "•ÒW‚µ‚½‚¢—v‘f‚Ì”Ô†‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;

	int elementNum;
	cin >> elementNum;
	cout << endl;

	if (list.Search(elementNum))
	{
		cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì•ÏX‚·‚é’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;

		T changeElement{};
		cin >> changeElement;

		list.ChangeValue(changeElement, elementNum);
		cout << std::endl;

		cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì’l‚ª" << '"' << changeElement << '"' << "‚É•ÏX‚³‚ê‚Ü‚µ‚½" << endl;
	}
	else
	{
		cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B" << endl;
	}


	cout << std::endl;
	cout << "----------------------------------" << endl;
	cout << "9.—v‘f‘€ì‚É–ß‚é" << endl;

	cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 3;
	}

}

template<typename T>
void Delete(Mylist<T>& list, int& operationNum)
{
	cout << "[—v‘f‚Ìíœ]" << endl;
	cout << std::endl;
	cout << "íœ‚µ‚½‚¢—v‘f‚Ì”Ô†‚ğw’è‚µ‚Ä‚­‚¾‚³‚¢" << endl;

	int elementNum;
	cin >> elementNum;
	cout << endl;

	if (list.Search(elementNum))
	{
		cout << elementNum << "”Ô–Ú‚Ì—v‘f" << '"' << list.GetElement(elementNum) << '"' << "íœ‚µ‚Ü‚µ‚½" << endl;

		list.Delete(elementNum);

		cout << endl;
	}
	else
	{
		cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B" << endl;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.—v‘f‘€ì‚É–ß‚é" << endl;

	cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 4;
	}
}

template<typename T>
void Change(Mylist<T>& list, int& operationNum)
{
	cout << "[—v‘f‚Ì•À‚Ñ‘Ö‚¦]" << endl;
	cout << endl;
	cout << "•À‚Ñ‘Ö‚¦•û–@‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	cout << "1.¸‡‚Å•À‚Ñ‘Ö‚¦‚é" << endl;
	cout << "2.~‡‚Å•À‚Ñ‘Ö‚¦‚é" << endl;

	int changeOperationNum;

	cin >> changeOperationNum;

	switch (changeOperationNum)
	{
	case 1:
	{

		list.Sort();
		cout << "ƒŠƒXƒg‚Ì—v‘f‚ğ¸‡‚Å•À‚Ñ‘Ö‚¦‚Ü‚µ‚½" << std::endl;
	}
	break;
	case 2:
		list.Sort(false);
		std::cout << "ƒŠƒXƒg‚Ì—v‘f‚ğ~‡‚Å•À‚Ñ‘Ö‚¦‚Ü‚µ‚½" << std::endl;

		break;
	default:
		break;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.—v‘f‘€ì‚É–ß‚é" << endl;

	cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 5;
	}
}


int main()
{
	Mylist<std::string> list;

	/*list.PushBack("5");
	list.PushBack("4");
	list.PushBack("3");
	list.PushBack("2");
	list.PushBack("1");*/


	list.Dump();

	//—v‘f‚Ì‘€ì‚Ì‘€ì”Ô†
	int operationNum = 0;

	//—v‘f‚Ì•\¦‚Ì‘€ì”Ô†
	int displayOperationNum = 0;


	while (true)
	{
		std::cout << "[—v‘f‚Ì‘€ì]" << std::endl;
		std::cout << "1.—v‘f‚Ì•\¦" << std::endl;
		std::cout << "2.—v‘f‚Ì‘}“ü" << std::endl;

		if (list.Size() > 0)
		{
			std::cout << "3.—v‘f‚Ì•ÒW" << std::endl;
			std::cout << "4.—v‘f‚Ìíœ" << std::endl;
		}

		std::cout << "5.—v‘f‚Ì•À‚Ñ‘Ö‚¦(ƒIƒvƒVƒ‡ƒ“)" << std::endl;
		std::cout << std::endl;
		std::cout << "----------------------------------" << std::endl;
		std::cout << "‘€ì‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

		std::cout << std::endl;

		if (operationNum == 0)
		{
			//‘€ì”Ô†‚ğæ“¾
			std::cin >> operationNum;
		}
		system("cls");

		switch (operationNum)
		{
		case 1://—v‘f‚Ì•\¦
			Display(list, operationNum, displayOperationNum);
			break;

		case 2://ÅŒã”ö‚É—v‘f‚ğ’Ç‰Á
			Insert(list, operationNum);
			break;

		case 3://”CˆÓ‚ÌêŠ‚Ì’l‚ğ•ÏX
			Edit(list, operationNum);
			break;
		case 4://”CˆÓ‚ÌêŠ‚Ìíœ
			Delete(list, operationNum);
			break;
		case 5://”CˆÓ‚ÌêŠ‚Æ”CˆÓ‚ÌêŠ‚ğ“ü‚ê‘Ö‚¦
			Change(list, operationNum);
			break;
		}
	}

	return 0;
}

