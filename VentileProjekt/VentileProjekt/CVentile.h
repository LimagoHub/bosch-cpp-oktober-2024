#pragma once

#define VENTIL_0 0
#define VENTIL_1 1
#define VENTIL_2 2
#define VENTIL_3 3
#define VENTIL_4 4
#define VENTIL_5 5
#define VENTIL_6 6
#define VENTIL_7 7


class CVentile
{
private:
	unsigned char ucVentile;
public:
	CVentile()
	{
		ucVentile = 0x00;
	}

	/* methode die ein bestimmtes Ventil oeffnet (bit auf 1 setzen) */
	void oeffneVentil(unsigned char ventilNummer)
	{
		ucVentile |= (1 << ventilNummer);
	}

	/* methode die ein bestimmtes Ventil schliesst (bit auf 0 setzen) */
	void schliesseVentil(unsigned char ventilNummer)
	{
		ucVentile &= ~(1 << ventilNummer);
	}
	/* methode die den Zustand eines Ventils liefert */
	bool getVentilStatus(unsigned char ventilNummer)
	{
		return ucVentile & (1 << ventilNummer);
	}
	/* Notaus (alle Bits auf null)  */
	void schliesseAlleVentile()
	{
		ucVentile = 0x00;
	}
};

