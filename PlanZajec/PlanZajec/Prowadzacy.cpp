#include"Prowadzacy.h"
#include <fstream>
#include <sstream>
using namespace std;
Prowadzacy::Prowadzacy() {};
Prowadzacy::Prowadzacy(string _nazwisko, string _przedmiot, int _odgodz, int _dogodz)
{
	nazwisko = _nazwisko;
	przedmiot = _przedmiot;
	odgodz = _odgodz;
	dogodz = _dogodz;
}
int Prowadzacy::iloscProwadzacych()
{
	return prowadzacy.size();
}
void Prowadzacy::wczytajProwadzacych(string s)
{
	ifstream plik(s);
	string linie;
	while (getline(plik, linie))
	{
		stringstream wczytaj(linie);
		string nazwisko,przedmiot;
		int odgodz, dogodz;
		wczytaj >> nazwisko;
		wczytaj.ignore();
		wczytaj >> przedmiot;
		wczytaj.ignore();
		wczytaj >> odgodz;
		wczytaj.ignore();
		wczytaj >> dogodz;
		wczytaj.ignore();
		prowadzacy.push_back(Prowadzacy(nazwisko,przedmiot,odgodz,dogodz));
	}
	plik.close();
}
void Prowadzacy::wyswietlProwadzacego(string nazwa,int czas)
{
	for (int i = 0; i < iloscProwadzacych(); i++)
	{
		if (nazwa == prowadzacy[i].przedmiot)
		{
			if (czas >= prowadzacy[i].odgodz&&czas <= prowadzacy[i].dogodz)
			{
				cout << prowadzacy[i].nazwisko << " ";
			}
		}
	}
}