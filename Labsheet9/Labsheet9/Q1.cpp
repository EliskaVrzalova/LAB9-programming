// name: eliska vrzalova
// login: c00301738
// date: 27/11/2023
// est time: 10 min
// program tittle and description: 100 rand generated numbers (1-40) displayed and summarized
// any known bugs: 

#include <cstdlib>
#include <ctime>
#include <iostream>

void generateRandom();
int main()
{
	srand(time(nullptr));
	generateRandom();


	system("Pause");
	return 0;
}
void generateRandom()
{
	//variables
	int count = 1;
	int sum = 0;
	int number = 0;
	

	while (count <= 10)
	{
		number = (rand() % 40) + 1;
		std::cout << "The number is:" << number << std::endl;
		sum = sum + number;
		count++;
	}
	std::cout << "The sum of the numbers is:" << sum << std::endl;
}



