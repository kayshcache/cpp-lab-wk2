#include <iostream>

void print_loop(int value);

int main()
{
	int value;
	std::cin >> value;
	print_loop(value);
	return 0;
}

void print_loop(int value) {
	for( int counter=1; counter < 13; counter++ ) {
		std::cout << value * counter << std::endl;
	}
}

