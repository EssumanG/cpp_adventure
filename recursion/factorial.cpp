#include <iostream>
using namespace std;

int factorial(int);
bool isPostiveInt(int);


int main()
{

    cout << "Please enter a non-negative integer: ";
    int n;
    cin >> n;
    if(!(isPostiveInt(n)))
    {
        cout <<"You entered a negative number" << endl;
        cout <<"Exiting Program..." << endl;
        exit(1);
    }

    int fact = factorial(n);
    cout << "Factorial of " << n << " is " << factorial(n) << endl;


    return 0;


}

bool isPostiveInt(int num)
{
    return num >= 0;
}

int factorial(int n)
{
    if(n==0)
        return 1;
    return n * factorial(n -1);
}

