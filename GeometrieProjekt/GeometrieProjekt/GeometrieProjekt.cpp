#include <iostream>

#include "Punkt.h"


int main()
{
    Punkt p;
    std::cout << p << std::endl;

    for (int i = 0; i < 11; ++i)
    {
        p.rechts();
        std::cout << p.ToString() << std::endl;
    }
}
