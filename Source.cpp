#include <iostream>
//#include <cstdlib>
#include <chrono>
#include <random>

//Napraviti pojednostavljenu simulaciju kartaske igre blackjack.
//Korisnika se pita hoce li uzeti kartu, y znaci da, n znaci ne. Ukoliko se korisnik odluci za kartu, 
//dodaje mu se ta karta. Cilj je skupiti zbroj 21 ili sto blize tom broju.Ukoliko korisnik ima zbroj veci od 21, 
//automatski gubi igru.
//Nakon korisnika racunalo bira karte, racunalo ce odustati tj.nece vise uzimati karte ukoliko 
//ili ima bolji zbroj od igraca ili je u rasponu 13 - 21.

int returnCard()
{
	// construct a trivial random generator engine from a time-based seed:
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);

	std::uniform_int_distribution<int> distribution(1, 10);

	return distribution(generator);
}

int main()
{
	char choice = 'a';
	int sumOfCardsPlayer = 0;
	int sumOfCardsComp = 0;
	int counter = 1;

	std::cout << "This is a simple game of BlackJack!" << std::endl;
	std::cout << "=========================================" << std::endl;

	std::cout << std::endl;
	do
	{
		sumOfCardsPlayer += returnCard();
		std::cout << "Sum of your cards is:" << sumOfCardsPlayer << std::endl;
		std::cout << "Do you want another card? y/n" << std::endl;
		std::cin >> choice;
	} while (choice == 'y');

	if (sumOfCardsPlayer > 21)
	{
		std::cout << "You lost. :( " << std::endl;
	}
	else if (sumOfCardsPlayer == 21)
	{
		std::cout << "Black Jack! Automatic win!! " << std::endl;
	}
	else
	{
		std::cout << "=========================================" << std::endl;
		std::cout << "Now it is computer's turn!" << std::endl;

		do
		{
			sumOfCardsComp += returnCard();
			std::cout << "Turn number: " << counter << std::endl;
			std::cout << "Sum of computer cards is:" << sumOfCardsComp << std::endl;
			++counter;
		} while (sumOfCardsComp <= 21 && sumOfCardsComp <= 13);

		std::cout << std::endl;
		std::cout << "=========================================" << std::endl;
		std::cout << "=========================================" << std::endl;
		
		if (sumOfCardsComp > sumOfCardsPlayer && sumOfCardsComp <= 21)
		{
			std::cout << "Computer won! Better luck next time!" << std::endl;
		}
		else if (sumOfCardsComp == sumOfCardsPlayer)
		{
			std::cout << "It's a tie!" << std::endl;
		}
		else
		{
			std::cout << "You won! Woohoo!!" << std::endl;
		}
	}


	system("PAUSE");
}