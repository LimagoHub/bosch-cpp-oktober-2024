#include <iostream>

#include "CVentileUndPumpen.h"


using namespace std;
int main()
{

    CVentileUndPumpen meineVentile;

    cout << "Nach Erzeugung" << endl;
    meineVentile.ausgabe();

    cout << "\nNach Setzen von Ventil 3 und 6" << endl;
    meineVentile.oeffneVentil(VENTIL_3);
    meineVentile.oeffneVentil(VENTIL_6);
    meineVentile.startePumpe(2);
    meineVentile.ausgabe();

    cout << "\nNach Schliessen von Ventil 3" << endl;
    meineVentile.schliesseVentil(VENTIL_3);
    meineVentile.ausgabe();

    cout << "\nNotaus" << endl;
    meineVentile.notaus();
    meineVentile.ausgabe();

  
}
