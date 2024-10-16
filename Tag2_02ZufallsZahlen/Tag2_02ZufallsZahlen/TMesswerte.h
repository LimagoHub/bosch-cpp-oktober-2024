#pragma once

#define MESSWERT_SIZE 10000
struct TMesswerte
{

	CMesswertspeicherung()
	{
		for(int i = 0; i < 10000; i++)
		{
			Messwerte[i].boMesswertGueltig = 0;
		}
	}
	void foo();

	void bar()
	{
		
	}
};

