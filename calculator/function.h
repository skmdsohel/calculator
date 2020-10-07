#ifndef FUNCTION_H
#define FUNCTION_H
void showMenu ();
int getOption (int selection);
void getNumbers(int& num1, int& num2);
int addNumbers(int num1, int num2, int& sum);
int divideNumbers(int num1, int num2, int& sum);
int subtractNumbers(int num1, int num2, int& sum);
int multiplyNumbers(int num1, int num2, int& sum);
void displayResults(int num1, int num2, int& sum);
#endif