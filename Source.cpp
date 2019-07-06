#include <iostream>
#include <string>
#include <vector>
#include <ctime>

int main()
{
	srand(time(NULL));
	//koliko ce brojeva generirati je prvi parametar
	//drugi parametar je zadana razlika koju provjeravamo.
	
	int size = 0;
	int diff = 0;
	int counter = 0;
	std::vector<int> randomNiz;
	std::cout << "koliki niz pseudorandom brojeva hoces generirati: " << std::endl;
	std::cin >> size;

	//generacija brojeva do 100
	for (size_t i = 0; i < size; i++)
	{
		randomNiz.push_back(rand() % 100 - 1);
		std::cout << randomNiz.at(i) << "\t";
	}

	std::cout << "\n";
	//traženje koliko brojeva ima tu razliku
	std::cout << "Koja razlika izmedju brojeva te zanima?" << std::endl;
	std::cin >> diff;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (randomNiz.at(i) - randomNiz.at(j) == diff)
			{
				counter++;
			}
		}
		
	}

	//ispis brojeva
	std::cout << "Ima " << counter << " brojeva sa tom razlikom" << std::endl;

	system("PAUSE");
}