
/*

This prgoram is used find the number of digits in an integer using recursion

*/
#include <iostream>
#include <cmath>
using namespace std;

int f(int n)
{
    static int count=0;
    n = abs(n);
    if (n > 0)
    {
        count++;
        f(n/10);
    }
    
   return count;
    

}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int count = f(num);
    cout <<  num <<" contains " << count << " digits" << endl;
    return 0;
}