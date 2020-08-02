#include <iostream>

bool running = true;
class Calculator {
public:
	float x, y;
	Calculator(float passX, float passY) {
		x = passX;
		y = passY;
	}

	void addition() {
		std::cout << "\n" << x + y << "\n";
	}

	void subtraction() {
		std::cout << "\n" << x - y << "\n";
	}

	void multiplication() {
		std::cout << "\n" << x * y << "\n";
	}
	
	void division() {
		std::cout << "\n" << x / y << "\n";
	}


};

float getNumbers() {
	
	float x;
	std::cout << "Enter number: ";
	std::cin >> x;
	if (std::cin.fail()) {
		std::cerr << "Not a number!\n";
		running = false;
	}
	return x;
}

int main() {
	
	while (running) {
		std::cout << "Which would you like to do?\n1) Add\n2) Subtract\n3) Multiply \n4) Divide\n";
		int choice;
		std::cin >> choice;
		if (std::cin.fail()) {
			std::cerr << "Not a number!\n";
			running = false;
		}
		float x = getNumbers();
		float y = getNumbers();
		Calculator calculator(x, y);

		if (choice == 1) {
			calculator.addition();
		}
		else if (choice == 2) {
			calculator.subtraction();
		}
		else if (choice == 3) {
			calculator.multiplication();
		}
		else if (choice == 4) {
			calculator.division();
		}
		
	}
}