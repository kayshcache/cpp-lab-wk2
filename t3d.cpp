#include <iostream>

void print(int value);
int calculate(int value, int counter);

int main()
{
	int value;
	std::cin >> value;
	for( int counter=1; counter < 13; counter++ ) {
		int number = calculate(value, counter);
		print(number);
	}
	return 0;
}

void print(int value) {
	std::cout << value << std::endl;
}

int calculate(int value, int counter) {
	return value * counter;
}

