#ifndef Prowadzacy_h
#define Prowadzacy_h
#include <iostream>
#include <string>
#include <vector>

class Prowadzacy
{
public:
	std::string nazwisko, przedmiot;
	int odgodz, dogodz;
	std::vector<Prowadzacy> prowadzacy;
	Prowadzacy();
	Prowadzacy(std::string _nazwisko, std::string _przedmiot,int _odgodz,int _dogodz);
	void wczytajProwadzacych(std::string s);
	void wyswietlProwadzacego(std::string nazwa,int czas);
	int iloscProwadzacych();
};
#endif // !Prowadzacy_h