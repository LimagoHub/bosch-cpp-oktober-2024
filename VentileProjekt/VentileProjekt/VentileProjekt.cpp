#include <iostream>
#include  "CVentile.h"

using namespace std;
int main()
{

    CVentile meineVentile;
    cout << "Nach Erzeugung" << endl;
    for (int i = 0; i < 8; ++i)
    {
        cout << "Zustand des Ventils " << i << " ist " << meineVentile.getVentilStatus(i) << endl;
    }

    cout << "\nNach Setzen von Ventil 3 und 6" << endl;
    meineVentile.oeffneVentil(VENTIL_3);
    meineVentile.oeffneVentil(VENTIL_6);
    for (int i = 0; i < 8; ++i)
    {
        cout << "Zustand des Ventils " << i << " ist " << meineVentile.getVentilStatus(i) << endl;
    }

    cout << "\nNach Schliessen von Ventil 3" << endl;
    meineVentile.schliesseVentil(VENTIL_3);
    for (int i = 0; i < 8; ++i)
    {
        cout << "Zustand des Ventils " << i << " ist " << meineVentile.getVentilStatus(i) << endl;
    }

    cout << "\nNotaus" << endl;
    meineVentile.schliesseAlleVentile();
    for (int i = 0; i < 8; ++i)
    {
        cout << "Zustand des Ventils " << i << " ist " << meineVentile.getVentilStatus(i) << endl;
    }
  
}
