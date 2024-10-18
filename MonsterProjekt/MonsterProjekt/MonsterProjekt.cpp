#include <iostream>
#include "Oger.h"
#include "Zombie.h"

int main()
{
    Monster freddy;
    Oger durotan;
    Zombie snowShovel;

    Monster& monster = durotan;
    monster.makeNoise();

    monster.fight();
    monster.ausgabe();
}
