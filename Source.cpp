#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <deque>

//vjezba za container klase

int main()
{
	std::vector<int> myVector;
	myVector.push_back(5);

	//parovi podataka
	std::pair<std::string, std::string> myPair;
	myPair.first = "Arton";
	myPair.second = "Glocke";

	std::pair<std::string, std::string> secondPair = std::make_pair<std::string, std::string>("Aron", "Thompson");

	//mape --> dictionary 
	std::map<std::string, std::string> myMap;
	myMap.insert(myPair);
	myMap.insert(secondPair);
	myMap.insert(std::make_pair<std::string, std::string>("Maja", "Stipetic"));
	myMap.insert(std::make_pair<std::string, std::string>("Domeniko", "Sutlovic"));

	for (auto it : myMap)
	{
		std::cout << it.first << ", ";
		std::cout << it.second << std::endl;
	}

	std::cout << myMap["Maja"] << std::endl;

	//key odnosno first je jedinstven, tako da myMap.insert(std::make_pair<std::string, std::string>("Maja", "Blabla"));
	//ce prepisati ovu prvu Maju :/
	std::cout << "=============================================================================" << std::endl;
	std::queue<std::string> myQueue;
	myQueue.push("Arton");
	myQueue.push("Maja");
	myQueue.push("Domeniko");
	myQueue.push("Aron");
	myQueue.push("Iggy");
	myQueue.push("Kristijan");
	myQueue.push("Adnan");
	myQueue.push("Aleksandar");

	while (!myQueue.empty())
	{
		std::cout << myQueue.front() << std::endl;
		myQueue.pop();
	}
	std::cout << "=============================================================================" << std::endl;
	std::stack<std::string> myStack;
	myStack.push("Arton");
	myStack.push("Maja");
	myStack.push("Domeniko");
	myStack.push("Aron");
	myStack.push("Iggy");
	myStack.push("Kristijan");
	myStack.push("Adnan");
	myStack.push("Aleksandar");

	while (!myStack.empty())
	{
		std::cout << myStack.top() << std::endl;
		myStack.pop();
	}
	std::cout << "=============================================================================" << std::endl;
	std::deque<std::string> myDeque;
	myDeque.push_back("Arton");
	myDeque.push_back("Maja");
	myDeque.push_back("Domeniko");
	myDeque.push_back("Aron");
	myDeque.push_back("Iggy");
	myDeque.push_back("Kristijan");
	myDeque.push_back("Adnan");
	myDeque.push_back("Aleksandar");

	while (!myDeque.empty())
	{
		std::cout << myDeque.front() << std::endl;
		myDeque.pop_front();
		std::cout << myDeque.back() << std::endl;
		myDeque.pop_back();
	}

	system("PAUSE");
}