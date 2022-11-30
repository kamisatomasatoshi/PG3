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

	//リストを生成
	list<const char*> lst(yamanoteStationName, end(yamanoteStationName));

	//駅一覧
	printf("1970年駅一覧\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	//一つ開ける
	printf("\n");

	//駅一覧
	printf("2019年駅一覧\n");
	list<const char*>::iterator itr1970 = next(lst.begin(), 7);
	lst.insert(itr1970, "NishiniNippori");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	//一つ開ける
	printf("\n");

	//駅一覧
	printf("2022年駅一覧\n");
	list<const char*>::iterator itr2019 = next(lst.begin(), 25);
	lst.insert(itr2019, "TakanawaGateway");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}


	return 0;
}