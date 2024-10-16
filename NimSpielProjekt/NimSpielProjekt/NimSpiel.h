#pragma once
#include <iostream>
using namespace std;
class NimSpiel
{
private:
	int steine;

	bool gameover()
	{
		return steine < 1;
	}

	bool IsValid(int zug)
	{
		return zug >= 1 && zug <= 3;
	}

	void spielerzug()
	{
		int zug;
		while(true)
		{
			cout << "Es gibt " << steine << " Steine. Bitte nehmen Sie 1,2 oder 3!" << endl;
			cin >> zug;
			if (IsValid(zug)) break;
			cout << "Ungueltiger Zug\n";
		}
		steine -= zug;
	}

	void computerzug()
	{
		const int zuege[] = { 3,1,1,2 };
		int zug;
		if(gameover())
		{
			cout << "Du Loser" << endl;
			return;
		}
		if(steine == 1)
		{
			cout << "Du hast nur Glueck gehabt" << endl;
			steine--;
			return;
		}
		zug = zuege[steine % 4];

		cout << "Computer nimmt " << zug << " Steine" << endl;
		steine -= zug;


		
	}
public:
	NimSpiel()
	{
		steine = 23;
	}

	void spielen()
	{
		while(! gameover())
		{
			spielerzug();
			computerzug();
		}
	}
};

