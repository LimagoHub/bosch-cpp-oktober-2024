

#include <iostream>

int main()
{

    int werte[] = { 10,30,5,12 };

    int lottozahlen[6];

    lottozahlen[0] = 3;
    lottozahlen[1] = 5;
    lottozahlen[2] = 17;
    lottozahlen[3] = 33;
    lottozahlen[4] = 35;
    lottozahlen[5] = 40;

    for (int i = 0; i < 6; ++i)
    {
        std::cout << lottozahlen[i] << "  Hello World!\n";
    }
   
    std::cout << "Hello World!\n";
}

