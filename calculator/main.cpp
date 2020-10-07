#include <iostream>
#include"function.h"
using namespace std;

int main ()
{
int a=0;
int num1;
int num2;
int Result;
 
showMenu();
getOption(a);
getNumbers(num1, num2);
addNumbers(num1, num2, Result);
divideNumbers(num1, num2, Result);
subtractNumbers(num1, num2, Result);
multiplyNumbers(num1, num2, Result);
displayResults(num1, num2, Result);

}