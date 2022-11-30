#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;
int main()
{
	const char* yamanoteStationName[28] = {
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"ShinOkubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	//���X�g�𐶐�
	list<const char*> lst(yamanoteStationName, end(yamanoteStationName));

	//�w�ꗗ
	printf("1970�N�w�ꗗ\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	//��J����
	printf("\n");

	//�w�ꗗ
	printf("2019�N�w�ꗗ\n");
	list<const char*>::iterator itr1970 = next(lst.begin(), 7);
	lst.insert(itr1970, "NishiniNippori");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	//��J����
	printf("\n");

	//�w�ꗗ
	printf("2022�N�w�ꗗ\n");
	list<const char*>::iterator itr2019 = next(lst.begin(), 25);
	lst.insert(itr2019, "TakanawaGateway");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}


	return 0;
}