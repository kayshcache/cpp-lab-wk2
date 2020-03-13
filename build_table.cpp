# include <iostream>

int setChairs();
int setSurfaceArea();
std::string setColor();
char setWoodType(); // m mahogony, o oak, p pine // reject other with conditional
void calculatePrice();
void displayDetails(int chairs, int surface_area, std::string color); // table dimensions, wood, chair numbers
void displayPrice();

int main() {
	int chairs = setChairs();
	int surface_area = setSurfaceArea();
	std::string color = setColor();
	displayDetails(chairs, surface_area, color);
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

char setWoodType() {
	char wood_type;
	std::cin << 
}

void displayDetails(int chairs, int surface_area, std::string color) {
	std::cout << "Number of chairs is: " << chairs << std::endl;
	std::cout << "Surface area is: " << surface_area << std::endl;
	std::cout << "Color is: " + color << std::endl;
}
