#include "Kierunek.h"
#include <fstream>
#include <sstream>
using namespace std;
Kierunek::Kierunek() {};
Kierunek::Kierunek(string _x)
{
	nazwa = _x;
}
void Kierunek::wczytajKierunek(string s)
{
	ifstream plik(s);
	string linie;
	while (getline(plik, linie))
	{
		stringstream wczytaj(linie);
		string nazwa;
		wczytaj >> nazwa;
		kierunek.push_back(Kierunek(nazwa));
	}
	plik.close();
}
void Kierunek::wypiszKierunek(int a)
{

	cout << kierunek[a].nazwa << endl;
}