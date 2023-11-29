// name: eliska vrzalova
// login: c00301738
// date: 29/11/2023
// est time: 10 min
// program title and description:
// any known bugs:

#include <iostream>

int addNumbers(int t_startNum, int t_endNum);

int main()
{
	int startNum = 0;
	int endNum = 0;
	int sum = 0;

	//ask user for input
	std::cout << "Enter the starting number:" << std::endl;
	std::cin >> startNum;
	std::cout << "Enter the ending number:" << std::endl;
	std::cin >> endNum;

	if (startNum <= 0 && endNum <= 0)
	{
		std::cout << "Error: the numbers entered must be greater than 0." << std::endl;
	}
	if (startNum > endNum)
	{
		std::cout << "Error: ending number must be greater than starting number" << std::endl;
	}
	sum = addNumbers(startNum, endNum); //function call
	std::cout << "The sum of the numbers is:" << sum << std::endl;

	system("pause");
	return 0;
}
int addNumbers(int t_startNum, int t_endNum)
{
	int sum = 0;

	for (t_startNum; t_startNum <= t_endNum; t_startNum++)
	{
		sum = sum + t_startNum;
	}
	return sum;
}
