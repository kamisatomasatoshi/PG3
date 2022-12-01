#include <iostream>
#include"List.h"
#include<string>
using namespace std;

template<typename T>
void Display(Mylist<T>& list, int& operationNum, int& displayOperationNum)
{
	cout << "[要素の表示]" << endl;
	cout << "1.要素の一覧表示" << endl;
	cout << "2.順番を指定して要素を表示" << endl;
	cout << "9.要素操作に戻る" << endl;
	cout << endl;
	cout << "操作を選択してください" << endl;

	//操作番号を取得
	cin >> displayOperationNum;
	system("cls");

	switch (displayOperationNum)
	{
	case 1:
		cout << "[要素の一覧表示]" << endl;

		//一覧表示
		list.Dump();

		cout << "要素数:" << list.Size() << endl;

		break;
	case 2:
		cout << "[順番を指定して要素を表示]" << endl;
		cout << "表示したい要素の順番を指定してください。" << endl;

		//指定する番号を取得
		int specifyNum;
		cin >> specifyNum;
		cout << endl;

		//指定して表示
		list.SpecifyElement(specifyNum);

		break;

	case 9:
		operationNum = 0;
		break;
	}

	//要素操作に戻らなかったら
	if (displayOperationNum == 1 || displayOperationNum == 2)
	{
		cout << endl;
		cout << "----------------------------------" << endl;
		cout << "1.要素の表示に戻る" << endl;
		cout << "9.要素の操作に戻る" << endl;

		//操作番号を取得
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
	cout << "[リスト要素の挿入]" << endl;
	cout << endl;
	cout << "要素を追加場所を指定してください。最後尾に追加する場合は何も入力しないでください。" << endl;

	string insertNum;
	while (std::getchar() != '\n');

	getline(std::cin, insertNum);

	if (insertNum == "")
	{
		cout << "追加する要素の値を入力してください" << endl;
		T element{};

		cin >> element;

		list.PushBack(element);

		cout << "要素" << element << "が" << "最後尾に挿入されました" << endl;
	}
	else
	{
		int index = atoi(insertNum.c_str());

		cout << "追加する要素の値を入力してください" << endl;
		T element{};

		cin >> element;

		list.Insert(element, index);

		cout << "要素" << element << "が" << index << "番目に挿入されました" << endl;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.要素操作に戻る" << endl;

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
	cout << "[要素の編集]" << endl;
	cout << endl;
	cout << "編集したい要素の番号を入力してください" << endl;

	int elementNum;
	cin >> elementNum;
	cout << endl;

	if (list.Search(elementNum))
	{
		cout << elementNum << "番目の要素の変更する値を入力してください。" << endl;

		T changeElement{};
		cin >> changeElement;

		list.ChangeValue(changeElement, elementNum);
		cout << std::endl;

		cout << elementNum << "番目の要素の値が" << '"' << changeElement << '"' << "に変更されました" << endl;
	}
	else
	{
		cout << elementNum << "番目の要素のが見つかりませんでした。" << endl;
	}


	cout << std::endl;
	cout << "----------------------------------" << endl;
	cout << "9.要素操作に戻る" << endl;

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
	cout << "[要素の削除]" << endl;
	cout << std::endl;
	cout << "削除したい要素の番号を指定してください" << endl;

	int elementNum;
	cin >> elementNum;
	cout << endl;

	if (list.Search(elementNum))
	{
		cout << elementNum << "番目の要素" << '"' << list.GetElement(elementNum) << '"' << "削除しました" << endl;

		list.Delete(elementNum);

		cout << endl;
	}
	else
	{
		cout << elementNum << "番目の要素のが見つかりませんでした。" << endl;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.要素操作に戻る" << endl;

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
	cout << "[要素の並び替え]" << endl;
	cout << endl;
	cout << "並び替え方法を選択してください" << endl;
	cout << "1.昇順で並び替える" << endl;
	cout << "2.降順で並び替える" << endl;

	int changeOperationNum;

	cin >> changeOperationNum;

	switch (changeOperationNum)
	{
	case 1:
	{

		list.Sort();
		cout << "リストの要素を昇順で並び替えました" << std::endl;
	}
	break;
	case 2:
		list.Sort(false);
		std::cout << "リストの要素を降順で並び替えました" << std::endl;

		break;
	default:
		break;
	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "9.要素操作に戻る" << endl;

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

	//要素の操作の操作番号
	int operationNum = 0;

	//要素の表示の操作番号
	int displayOperationNum = 0;


	while (true)
	{
		std::cout << "[要素の操作]" << std::endl;
		std::cout << "1.要素の表示" << std::endl;
		std::cout << "2.要素の挿入" << std::endl;

		if (list.Size() > 0)
		{
			std::cout << "3.要素の編集" << std::endl;
			std::cout << "4.要素の削除" << std::endl;
		}

		std::cout << "5.要素の並び替え(オプション)" << std::endl;
		std::cout << std::endl;
		std::cout << "----------------------------------" << std::endl;
		std::cout << "操作を選択してください" << std::endl;

		std::cout << std::endl;

		if (operationNum == 0)
		{
			//操作番号を取得
			std::cin >> operationNum;
		}
		system("cls");

		switch (operationNum)
		{
		case 1://要素の表示
			Display(list, operationNum, displayOperationNum);
			break;

		case 2://最後尾に要素を追加
			Insert(list, operationNum);
			break;

		case 3://任意の場所の値を変更
			Edit(list, operationNum);
			break;
		case 4://任意の場所の削除
			Delete(list, operationNum);
			break;
		case 5://任意の場所と任意の場所を入れ替え
			Change(list, operationNum);
			break;
		}
	}

	return 0;
}

