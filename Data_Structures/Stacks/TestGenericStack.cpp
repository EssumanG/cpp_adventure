#include <iostream>
#include <string>

#include "GenericStack.h"

using namespace std;


int main()
{

    Stack<int> intStack;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        intStack.push(i+1);
    }

    while(!intStack.empty())
        cout << intStack.pop() << " ";
    cout << endl;
    
    return 0;
}