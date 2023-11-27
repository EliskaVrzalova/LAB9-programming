// name: eliska vrzalova
// login: c00301738
// date: 27/11/2023
// est time: 10 min
// program title and description: 10 even randomly generated numbers (10-50) summarized
// any known bugs:

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomEven();
int main2()
{
	//variables
	int sum = 0;

	srand(time(nullptr));

	sum = generateRandomEven();
	std::cout << "The sum of the numbers is:" << sum << std::endl;

	system("Pause");
	return 1;
}
int generateRandomEven()
{
	int count = 10;
	int sum = 0;
	int number = 0;

	while (count <= 10)
	{
		number = (rand() % 41) + 10;
		if (number % 2 == 0)
		{
			sum = sum + number;
			count++;
		}
	}
	return sum;
}