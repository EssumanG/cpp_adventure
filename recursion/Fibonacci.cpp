/*
This program computes the fibonacci of a given number
*/

#include <iostream>
using namespace std;

int fib(int);


int main()
{

    cout << "Enter an index for the Fibonacci number: ";

    int index;
    cin >> index;

    cout << "Fibonacci number at index " << index << " is " << fib(index) << endl;
    return 0;
}

int fib(int index)
{
    if(index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else
        return fib(index - 1) + fib(index - 2);
}
