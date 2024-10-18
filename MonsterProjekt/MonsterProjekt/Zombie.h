#pragma once
#include "Monster.h"

class Zombie: public Monster
{
protected:
	bool isAbleToFight() override
	{
		return true;
	}

public:
	void makeNoise() override
	{
		std::cout << "Grunz" << std::endl;
	}
	std::string getName() override
	{
		return "Zombie";
	}
};

