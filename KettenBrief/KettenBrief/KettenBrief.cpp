#include <iostream>

int main()
{
    const int nachfolger = 3;

    unsigned long long aktuelleZahlDerMitspieler = 1ULL;
    unsigned long long weltbevoelkerung = 8000000000ULL;

    size_t i = 0;

    while(aktuelleZahlDerMitspieler < weltbevoelkerung)
    {
        aktuelleZahlDerMitspieler *= nachfolger;
        i++;
    }

    std::cout << i << " Runden" << std::endl;
}

