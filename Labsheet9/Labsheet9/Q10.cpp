// name: eliska vrzalova
// login: c00301738
// date: 06/12/2023
// est time: 10 min
// program title and description:
// any known bugs: 

#include <iostream>

void countOccurencesPositions();

int main10()
{
	countOccurencesPositions();
	system("Pause");
	return 0;
}
void countOccurencesPositions()
{
	//variables
	int numberOfNumbers = 0;
	int number = 0;
	int count = 1;
	int position = 0;
	int firstPosition = 0;
	int lastPosition = 0;
	int const TARGET_NUMBER = 9;
	bool findFirstPosition = false;

	std::cout << "Enter the number of numbers:" << std::endl;
	std::cin >> numberOfNumbers;
	
	while (count <= numberOfNumbers)
	{
		position = count;
		std::cout << "Enter a number:" << std::endl;
		std::cin >> number;
		if (number == TARGET_NUMBER && findFirstPosition == false)
		{
			firstPosition = position;
			findFirstPosition = true;
		}
		if (number == TARGET_NUMBER)
		{
			lastPosition = position;
		}
		count++;
	}
	if (lastPosition == 0 && firstPosition != 0)
	{
		lastPosition = firstPosition;
	}
	std::cout << "The first occurence of the number " << TARGET_NUMBER << "is: " << firstPosition;
	std::cout << "The last occurence of the number " << TARGET_NUMBER << " is:" << lastPosition;

}