#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    ifstream input("states.txt");

    if(input.fail())
    {
        printf("hello");
        cout << "Fail does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    string city;
    string cities[10];
    int i = 0;
    while(!input.eof())
    {
        getline(input, cities[i], '#');
        i++;
    }

    input.close();

    for (int i=0; i < cities->size(); i++)
    {
        if(cities[i]!= "")
            cout << cities[i] << endl;
    }

    cout << "Done" << endl;

    return 0;

}