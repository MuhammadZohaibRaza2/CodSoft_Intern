// Muhammad Zohaib Raza
// Date: 02/07/2024
// CodSoft Internship
// Task2: Simple Calculator
// Description: This program is a simple calculator that takes two numbers and an operator as input and returns the result of the operation.
// The program should be able to handle the four basic arithmetic operations: addition, subtraction, multiplication, and division.
// The program should also be able to handle invalid input, such as an invalid operator.
#include <iostream>
using namespace std;
int main() {
	cout << "********************************************************" << endl;
	cout << "*********** Welcome to the Simple Calculator ***********" << endl;
	cout << "********************************************************" << endl;
	//Declaring variables
	double number1, number2, result = 0;
	char operation;
	//Taking input from user
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << "Enter the operation (+, -, *, /): ";
	do {
		cin >> operation;
		switch (operation) {
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		case '*':
			result = number1 * number2;
			break;
		case '/':
			if (number2 != 0) {
				result = number1 / number2;
			}
			else {
				cout << "Error: Division by zero is not allowed." << endl;
			}
			break;
		default:
			cout << "Error: Invalid operator." << endl;
			cout << "Enter the operator again (+, -, *, /): ";
		}
	} while (operation != '+' && operation != '-' && operation != '*' && operation != '/');
	cout << "********************************************************" << endl;
	cout << "********************************************************" << endl;
	if (operation == '/' && number2 == 0) {
		cout << "The result of " << number1 << " " << operation << " " << number2 << " is undefined." << endl;
	}
	else {
		cout << "The result of " << number1 << " " << operation << " " << number2 << " is " << result << "." << endl;
	}
	cout << "********************************************************" << endl;
	cout << "********************************************************" << endl;
	return 0;
}