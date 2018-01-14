#include <iostream>
#include <string>
#include <vector>
#include"Plan.h"
#include"Kierunek.h"
#include"Prowadzacy.h"
using namespace std;

int main()
{
	Kierunek kier;
	Prowadzacy prowadz;
	kier.wczytajKierunek("Kierunek.txt");
	prowadz.wczytajProwadzacych("Prowadzacy.txt");


	Plan bob[2][5][2];
	for (int i = 0; i < 2; i++)
	{
		kier.wypiszKierunek(i);
		for (int j = 0; j < 5; j++)
		{
			switch (j)
			{
			case 0: cout << "Poniedzialek" << endl; break;
			case 1: cout << "Wtorek" << endl; break;
			case 2: cout << "Sroda" << endl; break;
			case 3: cout << "Czwartek" << endl; break;
			case 4: cout << "Piatek" << endl; break;
			}
			for (int k = 0; k < 1; k++)
			{
					cout << "Godzina " << k + 1 << endl << "Podaj Nazwe przedmiotu: ";
					cin >> bob[i][j][k].przedmiot;
					if (i == 0)
					{
						while (bob[i][j][k].przedmiot == bob[1][j][k].przedmiot)
						{
							cout << "NOPE ZAJETY PODAJ NAZWE INNEGO PRZEDMIOTU" << endl;
							cin >> bob[i][j][k].przedmiot;
						}
					}
					else
						while (bob[i][j][k].przedmiot == bob[0][j][k].przedmiot)
						{
							cout << "NOPE ZAJETY PODAJ NAZWE INNEGO PRZEDMIOTU" << endl;
							cin >> bob[i][j][k].przedmiot;
						}
					cout << "Dostepni wykladowcy :" << endl;;
					prowadz.wyswietlProwadzacego(bob[i][j][k].przedmiot,k);
					cin >> bob[i][j][k].prowadzacy;
					if (i == 0)
					{
						while (bob[i][j][k].prowadzacy == bob[1][j][k].prowadzacy)
						{
							cout << "NOPE WYKLADOWCA ZAJETY" << endl;
							cin >> bob[i][j][k].prowadzacy;
						}
					}
					else
						while (bob[i][j][k].prowadzacy == bob[0][j][k].prowadzacy)
						{
							cout << "NOPE WYKLADOWCA ZAJETY" << endl;
							cin >> bob[i][j][k].prowadzacy;
						}
					cout << "Podaj nr sali: ";
					cin >> bob[i][j][k].sala;
					if (i == 0)
					{
						while (bob[i][j][k].sala == bob[1][j][k].sala)
						{
							cout << "NOPE SALA ZAJETA" << endl;
							cin >> bob[i][j][k].sala;
						}
					}
					else
						while (bob[i][j][k].sala == bob[0][j][k].sala)
						{
							cout << "NOPE SALA ZAJETA" << endl;
							cin >> bob[i][j][k].sala;
						}
			}
		}
	}
	for (int i = 0; i < 2; i++)
	{
		kier.wypiszKierunek(i);
		for (int j = 0; j < 5; j++)
		{
			switch (j)
			{
			case 0: cout << "Poniedzialek" << endl; break;
			case 1: cout << "Wtorek" << endl; break;
			case 2: cout << "Sroda" << endl; break;
			case 3: cout << "Czwartek" << endl; break;
			case 4: cout << "Piatek" << endl; break;
			}
			for (int k = 0; k < 1; k++)
			{
				cout << "Godzina " << k + 1 << " ";
				cout << bob[i][j][k].przedmiot << " ";
				cout << bob[i][j][k].prowadzacy << " ";
				cout << bob[i][j][k].sala << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	system("pause");
	return 0;

}