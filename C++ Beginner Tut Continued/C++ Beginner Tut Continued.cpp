#include <iostream>


int calc(double numOne, double numTwo, char op) {
	double result = 0;
	switch (op) {
	case '+':
		result = numOne + numTwo;
		break;
	case '-':
		result = numOne - numTwo;
		break;
	case '*':
		result = numOne * numTwo;
		break;
	case '/':
		result = numOne / numTwo;
		break;
	default:
		result = 0;
	}
	std:: cout << "The answer is: " << result << std:: endl;
	return 0;
}

int main()
{
	std:: string anotherCalculation;
	double numOne, numTwo;
	char op;
	std:: cout << "Please select your first digit" << std:: endl;
	std:: cin >> numOne;
	std:: cout << "Please select your operand (+, -, *, or / )" << std:: endl;
	std:: cin >> op;
	std:: cout << "Please select your second digit" << std:: endl;
	std:: cin >> numTwo;

	calc(numOne, numTwo, op);

	std:: cout << "Would you like to make another calculation? Types yes or no." << std:: endl;
	std:: cin >> anotherCalculation;
	if (anotherCalculation == "yes" || anotherCalculation == "Yes") {
		main();
	}
	else {
		std:: cout << "Thank you for playing !";
	}
	return 0;
}