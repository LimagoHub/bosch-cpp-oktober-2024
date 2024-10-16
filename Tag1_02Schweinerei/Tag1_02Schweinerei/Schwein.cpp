#include "Schwein.h"

#include <iostream>

Schwein::Schwein(std::string neuername)
{
	name = neuername;
	gewicht = 10;
}

Schwein::~Schwein()
{
	std::cout << "Quuueeeeiiiick" << std::endl;
}

void Schwein::fuettern()
{
	gewicht++;
}
