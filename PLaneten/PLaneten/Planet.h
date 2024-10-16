#pragma once
#include <string>

using namespace std;

struct Planet
{
	string name;
	double masse;
	double durchmesser;

	Planet(const string name_, double masse_, double durchmesser_);
	Planet()
	{
		name = "";
		masse = 0;
		durchmesser = 0;


	};

};

