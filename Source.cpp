#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip> //Part of task2
#include <cctype> //Part of task3, from the hint
#include <string> //Part of task3

//Task 1: Write a program that queries the user for two numbers and sums the numbers in that range (including the first number, excluding the last number).
void Range_sum() {
	int v1 = 0, v2 = 0;
	
	do {
		cout << "Enter two numbers" << endl;
		cin >> v1 >> v2;
		// Ensure the second number is greater than the first number, if not then allow the user to try again.
		if (v2 < v1) {
			cout << "Error: Second number should be greater than the first number. Please try again." << endl;
			cout << std::endl; //to print a new line
		}
	} while (v2 < v1);

	int s = 0;
	for (int i = v1; i < v2; i++) {
		s += i;
	}

	cout << "Sum (including the first number, excluding the last number) is " << s << endl;
	cout << std::endl; //to print a new line
}

//Task2: Write a program that prompts the user to enter a number and then calculates the approximate factorial of the given number as a double precision floating point numberand writes it to the standard output.
void Factorial() {
	int number;
	// Ensure that the number is positive, if not then allow the user to try again.
	do {
		std::cout << "Enter a number to calculate its factorial: ";
		std::cin >> number;

		if (number < 0) {
			std::cout << "Factorial is not defined for negative numbers. Please try again.\n";
			cout << std::endl; //to print a new line
		}
	} while (number < 0);
	
	
		double factorial = 1.0;

		for (int i = 2; i <= number; ++i) {
			factorial *= i;
		}

		std::cout << std::fixed << std::setprecision(1) << number << "! = " << factorial << std::endl;
		cout << std::endl; //to print a new line
	
}

//Task 3: Write a program that reads a line from standard input and prints the line to standard output but with all punctuation removed.

void punctuation() {
	std::string inp;
	cout << "Write something: " << endl;
	getline(cin, inp); // getline is used to read a line (.. and the spaces) from an input stream and store it in a string.

	cout << "Line without punctuation: " << endl;
	for (char character : inp) {
		if (!std::ispunct(character)) { //ispunct checks if a character is a punctuation or not, so if it's NOT a punctuation then...
			std::cout << character;
		}
	}
	cout << std::endl; //to print a new line
}

int main() {

	//Range_sum();
	Factorial();
	//punctuation();

	return 0;
}