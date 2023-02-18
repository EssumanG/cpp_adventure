#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input("scores.txt");


    //Test if file exist
    if (input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;

        return 0;
    }

    //Read data
    string firstName, lastName;
    char middleName;

    int score;

    // while (!input.eof())
    // {
    //     input >> firstName >> middleName >> lastName >> score;
    //     if(input.eof()) break;
    //     cout << firstName << " " << middleName << " " << lastName << " " << score << endl;
    // }
    



    while (input >> firstName >> middleName >> lastName >> score)
    {
        cout << firstName << " " << middleName << " " << lastName << " " << score << endl;
    }
    
    


    input.close();

    cout << "Done" << endl;

}
