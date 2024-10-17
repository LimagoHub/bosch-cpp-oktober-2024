#pragma once
#include <iostream>

class Monster
{
private:
	int power;

protected:
	int get_power() const
	{
		return power;
	}

	void set_power(int power)
	{
		this->power = power;
	}

	virtual void doFight()
	{
		power--;
	}

	virtual bool isAbleToFight()
	{
		return power >= 0;
	}
public:
	Monster():power(10) {  }

	virtual void eat()
	{
		power++;
	}
	void fight()
	{
		if(isAbleToFight())
			doFight();
		else
			std::cout << "Kann nicht kaempfen" << std::endl;
	}

	virtual void makeNoise()
	{
		std::cout << "mememe" << std::endl;

	}

	virtual std::string getName()
	{
		return "Monster";
	}

	virtual void ausgabe()
	{
		std::cout << getName() << ": Power=" << get_power() << std::endl;
	}
};

