#pragma once
#include <ostream>
#include <string>
class Punkt
{
private:
	const double MAX = 10.0;
	double x;
	double y;

	void set_x(double neues_x)
	{
		if (neues_x > MAX) neues_x = MAX;
		if (neues_x < -MAX) neues_x = -MAX;
		x = neues_x;
	}

	void set_y(double neues_y)
	{
		if (neues_y > MAX) neues_y = MAX;
		if (neues_y < -MAX) neues_y = -MAX;
		y = neues_y;
	}

public:
	Punkt() {
		x = y = 0.0;
	}

	Punkt(double x, double y) {
		//Punkt::x = x;
		set_x(x);
		set_y(y);
	}

	double get_x() const
	{
		return x;
	}

	double get_y() const
	{
		return y;
	}

	/*void rechts()
	{
		rechts(1.0);
	}*/

	void rechts(double offset= 1.0)
	{
		set_x(get_x() + offset);
	}

	void links()
	{
		set_x(get_x() - 1);
	}

	void oben()
	{
		set_y(get_y() + 1);
	}

	void unten()
	{
		set_y(get_y() - 1);
	}

	virtual std::string ToString() const
	{
		return "X = " + std::to_string(x) + ", Y = " + std::to_string(y);
	}

	/* rechts, links, oben, unten, getX, getY */
	/* -10 <= x <= 10 */
	friend std::ostream& operator<<(std::ostream& os, const Punkt& punkt)
	{
		return os
			<< punkt.ToString();
			
	}
};

