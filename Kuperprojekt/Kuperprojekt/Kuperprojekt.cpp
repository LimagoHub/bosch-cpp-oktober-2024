#include <iostream>

int main()
{
    double kupferreserven = 880;
    double verbrauch = 20.6;

    double wachstum;

    std::cout << "Bitte geben Sie das Wachstum ein: ";
    std::cin >> wachstum;

    double wachstumInProzent = 1 + (wachstum / 100.0);
    int jahre = 0;

    while(kupferreserven > 0)
    {
        kupferreserven -= verbrauch;
        verbrauch *= wachstumInProzent;
        jahre++;
    }

    std::cout << jahre;
}