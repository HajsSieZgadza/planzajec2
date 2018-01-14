#ifndef Plan_h
#define Plan_h
#include<iostream>
class Plan
{
public:
	std::string prowadzacy, sala, przedmiot;
	Plan() {};
	Plan(std::string _prowadzacy, std::string  _sala, std::string _przedmiot)
	{
		prowadzacy = _prowadzacy;
		sala = _sala;
		przedmiot = _przedmiot;
	}
};
#endif // !Plan_h
