#pragma once
#include "CVentile.h"

#define PUMPE_0 0
#define PUMPE_1 1
#define PUMPE_2 2
#define PUMPE_3 3
#define PUMPE_4 4
#define PUMPE_5 5
#define PUMPE_6 6
#define PUMPE_7 7

class CVentileUndPumpen: public CVentile
{
private:
	bool abPumpen[8];
public:
	size_t AnzahlPumpen()
	{
		return sizeof(abPumpen) / sizeof(bool);
	}

	CVentileUndPumpen()
	{
		for (int i = 0; i < AnzahlPumpen(); ++i)
		{
			abPumpen[i] = false;
		}
	}

	void startePumpe(unsigned char pumpenNr)
	{
		abPumpen[pumpenNr] = true;
	}

	void stoppePumpe(unsigned char pumpenNr)
	{
		abPumpen[pumpenNr] = true;
	}

	bool getZustandVonPumpe(unsigned char pumpenNr)
	{
		return abPumpen[pumpenNr];
	}

	void allePumpenAus()
	{
		for (int i = 0; i < AnzahlPumpen(); ++i)
		{
			stoppePumpe(i);
		}
	}

	void notaus()
	{
		schliesseAlleVentile();
		allePumpenAus();
	}

	void ausgabe() override
	{
		CVentile::ausgabe();
		for (int i = 0; i < AnzahlPumpen(); ++i)
		{
			std::cout
				<< "Zustand der Pumpe "
				<< i << " ist "
				<< (getZustandVonPumpe(i) ? "offen" : "geschlossen")
				<< std::endl;
		}
	}
};

