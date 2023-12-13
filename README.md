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

## Changes in the Latest Update

### Code Refactoring and Issue Resolution

In this update, the following changes have been made to enhance code functionality:

#### 1. Precision Formatting in Task 2
To address the first issue, the code has been updated to use the "std::setprecision" function, ensuring accurate formatting of floating-point values during output operations.

#### 2. User Input Validation in Tasks 2 and 3
For the second and third tasks, input validation checks have been added to ensure that users provide correct values. If incorrect values are entered, the system prompts the user to retry, improving the overall robustness of the program.

#### Ongoing Challenge

Despite the improvements, there is an ongoing challenge. While the code runs as intended, the third task is currently dependent on the absence of calls to other tasks. To achieve seamless functionality across all tasks, further adjustments may be necessary. Consider commenting out or removing calls to other tasks to ensure proper execution of the third task until a comprehensive solution is implemented.

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


1. **Issue 1: Type Casting in the Second Task** ✅ This issue has been resolved.
   - **Description:** Despite casting the result to double in the second task, the output remains an integer when the input is an integer.
   - **Impact:** This behavior is not intended and may lead to unexpected results.

2. **Issue 2: User Input Handling in the Third Task**
   - **Description:** The code in the third task does not properly handle user input, causing the program to terminate without allowing any input.
   - **Impact:** Users won't be able to provide input as intended, leading to an incomplete or incorrect execution of the code.

