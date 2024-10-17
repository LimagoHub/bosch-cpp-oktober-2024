#include <iostream>

#include "Kreis.h"
#include "Punkt.h"


int main()
{
    Kreis p;
    std::cout << p << std::endl;

    for (int i = 0; i < 11; ++i)
    {
        p.rechts();
        std::cout << p.ToString() << std::endl;
    }
}
