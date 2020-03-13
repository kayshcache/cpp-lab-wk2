#include <iostream>

int main()
{
	int value;
	std::cin >> value;
	for( int counter=1; counter < 13; counter++ ) {
		std::cout << value * counter;
		std::cout << "\n";
	}
	return 0;
}
