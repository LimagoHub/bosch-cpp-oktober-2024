#pragma once
#include <ostream>

class Punkt
{
private:
	double x;
	double y;
public:
	Punkt() {
		x = y = 0.0;
	}

	/* rechts, links, oben, unten, getX, getY */
	/* -10 <= x <= 10 */
	friend std::ostream& operator<<(std::ostream& os, const Punkt& obj)
	{
		return os
			<< "x: " << obj.x
			<< " y: " << obj.y;
	}
};

