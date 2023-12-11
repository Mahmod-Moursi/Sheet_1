#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cctype> //Part of task3, from the hint
#include <string> //Part of task3

//Part of task 2
double facto(int n1) {
	if (n1 < 0) {
		cout << "Error" << endl;
		return 1; // 1 for an error code
	}
	double f = 1.0;
	while (n1 > 0)
	{
		f *= n1;
		n1--;
	}
	return f;
	//return tgamma(n1 + 1); // Gamma function is used to handle non-integer values

}

int main() {
	//Task 1: Write a program that queries the user for two numbers and sums the numbers in that range (including the first number, excluding the last number).
	int v1, v2 = 0;
	cout << "Enter two numbers" << endl;
	cin >> v1;
	cin >> v2;

	if (v2 <= v1) {
		cout << "Error" << endl;
		return 1; // 1 for an error code
	}

	int s = 0;
	for (int i = v1; i < v2; i++) {
		s += i;
	}

	cout << "Sum (including the first number, excluding the last number) is " << s << endl;
	cout << std::endl; //to print a new line

	//Task2: Write a program that prompts the user to enter a number and then calculates the approximate factorial of the given number as a double precision floating point numberand writes it to the standard output.

	double n1;
	cout << "Enter a number: " << endl;
	cin >> n1;

	double f = facto(n1);
	cout << static_cast<double>(f) << endl;
	cout << std::endl; //to print a new line

	//Task 3: Write a program that reads a line from standard input and prints the line to standard output but with all punctuation removed.
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

	return 0;
}