# Advanced Programming Techniques Project

This repository contains a C++ program developed as part of the Advanced Programming Techniques course project. The program includes implementations for three tasks:

## Tasks

### Task 1: Range Sum
Write a program that queries the user for two numbers and calculates the sum of the numbers in that range (including the first number, excluding the last number).

### Task 2: Factorial
Write a program that prompts the user to enter a number and calculates the approximate factorial of the given number as a double-precision floating-point number. Verify your program against the following test cases:
- 0! = 1.0
- 1! = 1.0
- 6! = 720.0
- 12! = 479001600.0
- 13! = 6227020800.0
- 21! ≈ 5.1091e19
- 35! ≈ 1.0333e40
- -1! = ?

### Task 3: Punctuation
Write a program that reads a line from standard input and prints the line to standard output but with all punctuation removed. The resulting program can be used as a filter.
Hint: Have a look at the following STL Header: <cctype>

	
## Usage

1. **Range Sum:**
   - Compile and run the program.
   - Enter two numbers when prompted.
   - The program will calculate and display the sum of numbers in the specified range.

2. **Factorial:**
   - Compile and run the program.
   - Enter a number when prompted.
   - The program will calculate and display the approximate factorial of the given number.

3. **Punctuation:**
   - Compile and run the program.
   - Enter a line of text when prompted.
   - The program will display the input line with all punctuation removed.

## Contributing

## License

## Known Issues

1. **Issue 1: Type Casting in the Second Task**
   - **Description:** Despite casting the result to double in the second task, the output remains an integer when the input is an integer.
   - **Impact:** This behavior is not intended and may lead to unexpected results.

2. **Issue 2: User Input Handling in the Third Task**
   - **Description:** The code in the third task does not properly handle user input, causing the program to terminate without allowing any input.
   - **Impact:** Users won't be able to provide input as intended, leading to an incomplete or incorrect execution of the code.

