# include <iostream>

int setChairs();
int setSurfaceArea();
std::string setColor();
std::string setWoodType(); // m mahogony, o oak, p pine // reject other with conditional
int calculatePrice(int chairs, int surface_area, std::string color, std::string wood);
void displayDetails(int chairs, int surface_area, std::string color, std::string wood); // table dimensions, wood, chair numbers
void displayPrice(int price);

int main() {
	int chairs = setChairs();
	int surface_area = setSurfaceArea();
	std::string color = setColor();
	std::string wood = setWoodType();
	displayDetails(chairs, surface_area, color, wood);
	int price = calculatePrice(chairs, surface_area, color, wood);
	displayPrice(price);
	return 0;
}

int setChairs() {
	int number_of_chairs;
	std::cout << "How many chairs would you like? ";
	std::cin >> number_of_chairs;
	return number_of_chairs;
}

int setSurfaceArea() {
	int surface_area;
	std::cout << "What should the surface area be? ";
	std::cin >> surface_area;
	return surface_area;
}

std::string setColor() {
	std::string color;
	std::cout << "What color do you prefer? ";
	std::cin >> color;
	return color;
}

std::string setWoodType() {
	while (true) {
		char wood_type;
		std::cout << "Choose your wood, enter: m, o, or p" << std::endl;
		std::cin >> wood_type;
		const char mahogany = 'm';
		const char oak = 'o';
		const char pine = 'p';
		if (wood_type == mahogany) {
			return "mahogany";
		} else if (wood_type == oak) {
			return "oak";
		} else if (wood_type == pine) {
			return "pine";
		} else {
			std::cout << "Try again" << std::endl;
			continue;
		}
	}
}

int calculatePrice(int chairs, int surface_area, std::string color, std::string wood) {
	int wood_price;
	if (wood == "mahogany") {
		wood_price = 200;
	} 
	if (wood == "pine") {
		wood_price = 95;
	} 
	if (wood == "oak") {
		wood_price = 150;
	}
	double table_price = wood_price * (surface_area + (chairs / 2));
	return table_price;
}

void displayDetails(int chairs, int surface_area, std::string color, std::string wood) {
	std::cout << "Number of chairs is: " << chairs << std::endl;
	std::cout << "Surface area is: " << surface_area << std::endl;
	std::cout << "Color is: " + color << std::endl;
	std::cout << "Wood type is: " + wood << std::endl;
}

void displayPrice(int price) {
	std::cout << "The price will be: $" << price << std::endl;
}
