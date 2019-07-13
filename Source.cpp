#include <iostream>
#include <string>
#include <vector>
#include <ctime>

int sumDigits(int a)
{
	int sum = 0;
	while (a > 0)
	{
		sum = sum + a % 10;
		a /= 10;
	}
	return sum;
}

int main()
{
	int prviBroj, drugiBroj, zbroj1, zbroj2;

	std::cout << "Program koji racuna da li dva broja imaju isti broj znamenki!" << std::endl;
	std::cout << "Koji je prvi broj?" << std::endl;
	std::cin >> prviBroj;

	std::cout << "Koji je drugi broj?" << std::endl;
	std::cin >> drugiBroj;

	zbroj1 = sumDigits(prviBroj);
	zbroj2 = sumDigits(drugiBroj);
	
	std::cout << "Zbroj znamenki prvog broja:" << zbroj1 <<std::endl;
	std::cout << "Zbroj znamenki drugog broja:" << zbroj2 << std::endl;

	if (zbroj1 == zbroj2)
	{
		std::cout << "Zbroj znamenki je isti! Yay!" << std::endl;
	}
	else
	{
		std::cout << "Zbroj znamenki nije isti! Buuu!" << std::endl;
	}


	system("PAUSE");
}