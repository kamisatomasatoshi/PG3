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

	//ƒŠƒXƒg‚ğ¶¬
	list<const char*> lst(yamanoteStationName, end(yamanoteStationName));

	//‰wˆê——
	printf("1970”N‰wˆê——\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	//ˆê‚ÂŠJ‚¯‚é
	printf("\n");

	//‰wˆê——
	printf("2019”N‰wˆê——\n");
	list<const char*>::iterator itr1970 = next(lst.begin(), 7);
	lst.insert(itr1970, "NishiniNippori");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	//ˆê‚ÂŠJ‚¯‚é
	printf("\n");

	//‰wˆê——
	printf("2022”N‰wˆê——\n");
	list<const char*>::iterator itr2019 = next(lst.begin(), 25);
	lst.insert(itr2019, "TakanawaGateway");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << "\n";
	}


	return 0;
}