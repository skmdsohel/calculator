#include <iostream>
#include"function.h"
using namespace std;
void showMenu ()
{
cout<<" 1. Select 1 to add two numbers."<<endl;
cout<<" 2. Select 2 to divide two numbers. " <<endl;
cout<<" 3. Select 3 to subtract two number. " <<endl;
cout<<" 4. Select 4 to multiply two number. " <<endl;
}

 

int getOption (int selection)
{
cin>>selection;
return selection;
}


void getNumbers(int& num1, int& num2)
{
cout<<"Enter two numbers: ";
cin>>num1 >>num2;
}

 
int addNumbers(int num1, int num2, int& sum)
{
sum=num1+num2;
cout << sum << endl;
return sum;
}

 
int divideNumbers(int num1, int num2, int& sum)
{
sum=num1/num2;
cout << sum << endl;
return sum;
}


int subtractNumbers(int num1, int num2, int& sum)
{
    sum=num1-num2;
cout << sum << endl;
    return sum;
}


int multiplyNumbers(int num1, int num2, int& sum)
{
    sum=num1 * num2;
cout << sum << endl;
    return sum;
}

 

void displayResults(int num1, int num2, int& sum)
{
    cout<<num1 << " + " <<num2 << " = " <<sum <<endl;
}