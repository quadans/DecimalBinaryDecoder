#include <iostream>

int decode(int x, int Vergleich)
{

	if (x >= Vergleich)
	{
		std::cout << "1";
		return x - Vergleich;
	}
	else
	{
		std::cout << "0";
		return x;
	}
}

int main()
{
	std::cout << "Gebe eine Zahl ein zwischen 0 bis 255 ";
	int Eingabe;
	std::cin >> Eingabe;

	Eingabe = decode(Eingabe, 128);
	Eingabe = decode(Eingabe, 64);
	Eingabe = decode(Eingabe, 32);
	Eingabe = decode(Eingabe, 16);

	std::cout << " ";

	Eingabe = decode(Eingabe, 8);
	Eingabe = decode(Eingabe, 4);
	Eingabe = decode(Eingabe, 2);
	Eingabe = decode(Eingabe, 1);

	return 0;
}