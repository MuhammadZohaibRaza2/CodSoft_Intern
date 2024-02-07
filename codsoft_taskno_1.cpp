// Muhammad Zohaib Raza
// Date: 02/07/2024
// CodSoft Internship
// Task1: Number Guessing Game
// Description: This program is a number guessing game. The program will generate a random number between number1 and number2. The user will have to guess the number. The program will tell the user if their guess is too high or too low. The user will continue to guess until they guess the correct number. The program will then tell the user how many guesses it took to guess the correct number.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	cout << "*******************************************************" << endl;
	cout << "********* Welcome to the Number Guessing Game *********" << endl;	
	cout << "*******************************************************" << endl;
	int number1, number2, guess, random, count = 0;
	cout << "Enter the range of numbers to guess between." << endl;
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	srand(time(0));
	random = number1 + rand() % (number2 - number1 + 1);
	do {
		cout << "Enter your guess between " << number1 << " and " << number2 << ": ";
		cin >> guess;
		count++;
		if (guess > random) {
			cout << "Your guess is too high." << endl;
		}
		else if (guess < random) {
			cout << "Your guess is too low." << endl;
		}
		else {
			cout << "*******************************************************" << endl;
			cout << "*******************************************************" << endl;
			cout << "Congratulations! You guessed the correct number." << endl;
			cout << "It took you " << count << " guesses to guess the correct number." << endl;
			cout << "*******************************************************" << endl;
			cout << "*******************************************************" << endl;
		}
	} while (guess != random);
	return 0;
}
