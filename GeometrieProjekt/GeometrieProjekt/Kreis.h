#pragma once
#include "Punkt.h"

class Kreis: public Punkt
{
private:
	double radius;

public:
	Kreis():Kreis(0,0,0) {

	}
	Kreis(double radius):Kreis(radius,0,0) {

	}
	Kreis(double x, double y):Kreis(0,x,y) {

	}
	Kreis(double radius, double x, double y):Punkt(x,y), radius(radius) {
		//Kreis::radius = radius;
	}
	double get_radius() const
	{
		return radius;
	}

	void set_radius(double radius)
	{
		Kreis::radius = radius;
	}

	std::string ToString() const override
	{
		return Punkt::ToString() + ", Radius=" + std::to_string(radius);
	}
};

