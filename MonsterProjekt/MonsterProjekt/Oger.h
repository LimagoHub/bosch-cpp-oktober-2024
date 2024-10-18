#pragma once
#include "Monster.h"

class Oger:public Monster
{
protected:
	void doFight() override
	{
		set_power(get_power() - 5);
	}
	

public:
	void eat() override
	{
		set_power(get_power() + 10);
	}
	void makeNoise() override{
		std::cout << "AAARRRGGGHHHH" << std::endl;

	}
	std::string getName() override
	{
		return "Oger";
	}
};

