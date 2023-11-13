#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");


	float num1, num2, res;

	std::cout << "Enter num1: ";
	std::cin >> num1;

	std::cout << "Enter num2: ";
	std::cin >> num2;

	char math;

	std::cout << "Enter '+', '-', '/', '*': ";
	std::cin >> math;

	switch (math) {
	case '+': res = num1 + num2; break;
	case '-': res = num1 - num2; break;
	case '/': res = num1 / num2; break;
	case '*': res = num1 * num2; break;
	}

	std::cout << "Result: " << res;

	return 0;
}