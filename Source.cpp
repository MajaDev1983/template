#include <iostream>
#include <string>
#include <vector>
#include <ctime>

struct Vector3
{
	int x, y, z;
};

int main()
{
	//int myNumberArray[4];
	//myNumberArray[0] = 5;
	//myNumberArray[1] = 7;
	//myNumberArray[2] = 8;
	//myNumberArray[3] = 2;
	//myNumberArray[4] = 10;

	//for (size_t i = 0; i < 4; i++)//pazi da ne izaðeš van arraya!!
	//{
	//	std::cout << myNumberArray[i] << std::endl;
	//}
	
	int* myArray = (int*)malloc(4 * sizeof(int));//koristi samo na stacku, a ne na heapu!!!!!!!!!
	//alociraj mi memoriju 4 puta integer
	myArray[0] = 3;
	myArray[0] = 3;
	myArray[0] = 3;
	myArray[0] = 3;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << myArray[i] << std::endl;
	}

	int matrix[4][4];
	// 5xxx
	// x7xx
	// xxxx
	// xx9x
	matrix[0][0] = 5;
	matrix[1][1] = 7;
	matrix[3][2] = 9;

	int threeD[4][4][4];

	Vector3 arr[4];

	int beauty[4][4];
	beauty[0][0] = 9;
	beauty[0][1] = -2;
	beauty[0][2] = 8;
	beauty[0][3] = 2;

	beauty[1][0] = -6;
	beauty[1][1] = -2;
	beauty[1][2] = 10;
	beauty[1][3] = -9;

	beauty[2][0] = 4;
	beauty[2][1] = 5;
	beauty[2][2] = 6;
	beauty[2][3] = 1;

	beauty[3][0] = 5;
	beauty[3][1] = 3;
	beauty[3][2] = 4;
	beauty[3][3] = 9;

	int mainDiag = beauty[0][0] + beauty[1][1] + beauty[2][2] + beauty[3][3];
	int sideDiag = beauty[3][0] + beauty[2][1] + beauty[1][2] + beauty[0][3];

	std::cout << mainDiag - sideDiag << std::endl;

	if (mainDiag - sideDiag == 0)
	{
		std::cout << "Matrica je najljepsa!" << std::endl;
	}
	else
	{
		std::cout << "Matrica nije najljepsa!" << std::endl;
	}


	//zadatak1
	std::cout << "Program za traženje najljepše matrice: " << std::endl;

	int beauty2[100][100];

	srand(time(NULL));

	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 100; j++)
		{
			beauty2[i][j] = (rand() % 200 - 100);
		}
	}

	int size;
	std::cout << "Unesi koliko veliku kvadratnu matricu hoces: " << std::endl;
	std::cin >> size;

	for (size_t z = 0 ; z < 100 - size; z++)//po jednoj dimenziji
	{
		for (size_t x = 0; x < 100 - size; x++)//po drugoj dimenziji
		{
			for (size_t i = 0 + z; i < size - 1 + z; i++)
			{
				for (size_t j = 0 + x; j < size - 1 + x; j++)
				{
					if (i == j)
					{
						mainDiag += beauty2[i][j];
					}
					if (i + j == size - 1)
					{
						sideDiag += beauty2[i][j];
					}
				}
			}

			std::cout << "Razlika dijagonala je:" << mainDiag - sideDiag << std::endl;;

			if (mainDiag - sideDiag == 0)
			{
				std::cout << "YOOOHOOOO!!!! Matrica je najljepsa!" << std::endl;
			}
		}
	}

	system("PAUSE");
}