#ifndef Kierunek_h
#define Kierunek_h
#include<iostream>
#include<vector>
#include <string>

class Kierunek
{
public:
	std::string nazwa;
	std::vector<Kierunek> kierunek;
	Kierunek();
	Kierunek(std::string _x);
	void wczytajKierunek(std::string s);
	void wypiszKierunek(int a);
};

#endif