#include <iostream>
using namespace std;

/*
bool anotherCalc(double result) {                      //This function displays the answer and asks//
	int moreCalc;
	cout << endl << "The answer is: " << result << endl;
	cout << "Would you like to make another calculation, Yes = 0, No = 1";
	cin >> moreCalc;
	if (moreCalc == 0) {
	
	}
	else {
		cout << "Thank you for playing !";
	}
	return true;								//if another calculation will be made//return 1;
}
*/
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
	cout << "The answer is: " << result << endl;
	return 0;

}


int main()
{
	string anotherCalculation;
	double numOne, numTwo;
	char op;
	cout << "Please select your first digit" << endl;
	cin >> numOne;
	cout << "Please select your operand (+, -, *, or / )" << endl;
	cin >> op;
	cout << "Please select your second digit" << endl;
	cin >> numTwo;

	calc(numOne, numTwo, op);

	cout << "Would you like to make another calculation? Types yes or no." << endl;
	cin >> anotherCalculation;
	if (anotherCalculation == "yes" || anotherCalculation == "Yes") {
		main();
	}
	else {
		cout << "Thank you for playing !";
	}
	return 0;
}




