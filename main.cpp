#include <iostream>
#include"List.h"
#include<string>
using namespace std;

template<typename T>
void Display(Mylist<T>& list, int& operationNum, int& displayOperationNum)
{
	cout << "[�v�f�̕\��]" << endl;
	cout << "1.�v�f�̈ꗗ�\��" << endl;
	cout << "2.���Ԃ��w�肵�ėv�f��\��" << endl;
	cout << "9.�v�f����ɖ߂�" << endl;
	cout << endl;
	cout << "�����I�����Ă�������" << endl;

	//����ԍ����擾
	cin >> displayOperationNum;
	system("cls");

	switch (displayOperationNum)
	{
	case 1:
		cout << "[�v�f�̈ꗗ�\��]" << endl;

		//�ꗗ�\��
		list.Dump();

		cout << "�v�f��:" << list.Size() << endl;

		break;
	case 2:
		cout << "[���Ԃ��w�肵�ėv�f��\��]" << endl;
		cout << "�\���������v�f�̏��Ԃ��w�肵�Ă��������B" << endl;

		//�w�肷��ԍ����擾
		int specifyNum;
		cin >> specifyNum;
		cout << endl;

		//�w�肵�ĕ\��
		list.SpecifyElement(specifyNum);

		break;

	case 9:
		operationNum = 0;
		break;
	}

	//�v�f����ɖ߂�Ȃ�������
	if (displayOperationNum == 1 || displayOperationNum == 2)
	{
		cout << endl;
		cout << "----------------------------------" << endl;
		cout << "1.�v�f�̕\���ɖ߂�" << endl;
		cout << "9.�v�f�̑���ɖ߂�" << endl;

		//����ԍ����擾
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
	cout << "[���X�g�v�f�̑}��]" << endl;
	cout << endl;
	cout << "�v�f��ǉ��ꏊ���w�肵�Ă��������B�Ō���ɒǉ�����ꍇ�͉������͂��Ȃ��ł��������B" << endl;

	string insertNum;
	while (std::getchar() != '\n');

	getline(std::cin, insertNum);

	if (insertNum == "")
	{
		cout << "�ǉ�����v�f�̒l����͂��Ă�������" << endl;
		T element{};

		cin >> element;

		list.PushBack(element);

		cout << "�v�f" << element << "��" << "�Ō���ɑ}������܂���" << endl;
	}
	else
	{
		int index = atoi(insertNum.c_str());

		cout << "�ǉ�����v�f�̒l����͂��Ă�������" << endl;
		T element{};

		cin >> element;

		list.Insert(element, index);

		cout << "�v�f" << element << "��" << index << "�Ԗڂɑ}������܂���" << endl;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.�v�f����ɖ߂�" << endl;

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
	cout << "[�v�f�̕ҏW]" << endl;
	cout << endl;
	cout << "�ҏW�������v�f�̔ԍ�����͂��Ă�������" << endl;

	int elementNum;
	cin >> elementNum;
	cout << endl;

	if (list.Search(elementNum))
	{
		cout << elementNum << "�Ԗڂ̗v�f�̕ύX����l����͂��Ă��������B" << endl;

		T changeElement{};
		cin >> changeElement;

		list.ChangeValue(changeElement, elementNum);
		cout << std::endl;

		cout << elementNum << "�Ԗڂ̗v�f�̒l��" << '"' << changeElement << '"' << "�ɕύX����܂���" << endl;
	}
	else
	{
		cout << elementNum << "�Ԗڂ̗v�f�̂�������܂���ł����B" << endl;
	}


	cout << std::endl;
	cout << "----------------------------------" << endl;
	cout << "9.�v�f����ɖ߂�" << endl;

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
	cout << "[�v�f�̍폜]" << endl;
	cout << std::endl;
	cout << "�폜�������v�f�̔ԍ����w�肵�Ă�������" << endl;

	int elementNum;
	cin >> elementNum;
	cout << endl;

	if (list.Search(elementNum))
	{
		cout << elementNum << "�Ԗڂ̗v�f" << '"' << list.GetElement(elementNum) << '"' << "�폜���܂���" << endl;

		list.Delete(elementNum);

		cout << endl;
	}
	else
	{
		cout << elementNum << "�Ԗڂ̗v�f�̂�������܂���ł����B" << endl;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.�v�f����ɖ߂�" << endl;

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
	cout << "[�v�f�̕��ёւ�]" << endl;
	cout << endl;
	cout << "���ёւ����@��I�����Ă�������" << endl;
	cout << "1.�����ŕ��ёւ���" << endl;
	cout << "2.�~���ŕ��ёւ���" << endl;

	int changeOperationNum;

	cin >> changeOperationNum;

	switch (changeOperationNum)
	{
	case 1:
	{

		list.Sort();
		cout << "���X�g�̗v�f�������ŕ��ёւ��܂���" << std::endl;
	}
	break;
	case 2:
		list.Sort(false);
		std::cout << "���X�g�̗v�f���~���ŕ��ёւ��܂���" << std::endl;

		break;
	default:
		break;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.�v�f����ɖ߂�" << endl;

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

	//�v�f�̑���̑���ԍ�
	int operationNum = 0;

	//�v�f�̕\���̑���ԍ�
	int displayOperationNum = 0;


	while (true)
	{
		std::cout << "[�v�f�̑���]" << std::endl;
		std::cout << "1.�v�f�̕\��" << std::endl;
		std::cout << "2.�v�f�̑}��" << std::endl;

		if (list.Size() > 0)
		{
			std::cout << "3.�v�f�̕ҏW" << std::endl;
			std::cout << "4.�v�f�̍폜" << std::endl;
		}

		std::cout << "5.�v�f�̕��ёւ�(�I�v�V����)" << std::endl;
		std::cout << std::endl;
		std::cout << "----------------------------------" << std::endl;
		std::cout << "�����I�����Ă�������" << std::endl;

		std::cout << std::endl;

		if (operationNum == 0)
		{
			//����ԍ����擾
			std::cin >> operationNum;
		}
		system("cls");

		switch (operationNum)
		{
		case 1://�v�f�̕\��
			Display(list, operationNum, displayOperationNum);
			break;

		case 2://�Ō���ɗv�f��ǉ�
			Insert(list, operationNum);
			break;

		case 3://�C�ӂ̏ꏊ�̒l��ύX
			Edit(list, operationNum);
			break;
		case 4://�C�ӂ̏ꏊ�̍폜
			Delete(list, operationNum);
			break;
		case 5://�C�ӂ̏ꏊ�ƔC�ӂ̏ꏊ�����ւ�
			Change(list, operationNum);
			break;
		}
	}

	return 0;
}

