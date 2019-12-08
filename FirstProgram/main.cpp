#include <iostream>

int main ()
{
	int favoriteNumber;
	
	std::cout << "Please enter a number between 1 and 100: ";
	std::cin >> favoriteNumber;
	std::cout << "You entered the number " << favoriteNumber << std::endl;
	
	return 0;
}