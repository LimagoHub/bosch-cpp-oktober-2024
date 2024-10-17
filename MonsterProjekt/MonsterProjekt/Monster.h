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
public:

	virtual void eat()
	{
		power++;
	}

	virtual void fight()
	{
		if(power < 0)
			std::cout << "Kann nicht kaempfen" << std::endl;
		power--;
	}

	virtual void makeNoise()
	{
		std::cout << "mememe" << std::endl;

	}
};

