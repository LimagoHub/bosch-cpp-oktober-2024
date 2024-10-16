
#include <iostream>

void bla(void)
{
	
}

void blub(int x)
{

}

int blaBlub(void)
{
	return 0;
}

int bar(int i)
{
	return 0;
}

void ausgabe()
{
	std::cout << "Hello World!\n";
}

void printZahl(int& zahl)
{
	zahl = 1000;
	std::cout << zahl << "\n";
}

unsigned SinnDesLebens()
{
	// 10 Millonen Jahre warten
	return 42;
}

double quadrat(double x)
{
	return x * x;
}

bool IsValid(double result)
{
	return result >= 1 && result <= 100;
}

double getValidValue()
{
	double result=.0;
	/*do
	{
		std::cout << "Bitte geben Sie einen Wert zwischen 1 und 100 ein: ";
		std::cin >> result;
	} while (result < 1.0 || result > 100.0);*/

	while(true)
	{
		std::cout << "Bitte geben Sie einen Wert zwischen 1 und 100 ein: ";
		std::cin >> result;
		if (IsValid(result)) break;
		std::cout << "Ungultiger Wert\n";
	}

	return result;
}



int main()
{
	/*int x = 5;
	printZahl(10);
	std::cout << x << std::endl;*/
	int a = 20;
	int b = 50;
	std::swap(a, b);

}

