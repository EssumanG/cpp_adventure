#include <iostream>

using namespace std;
void printArray(int [], int);
int* removeElement(int[], int, int, int&);


int main()
{

    int size = 7;
    int array[size];
    int new_size;
    for (int i = 0;  i < size; i++)
    {
        array[i] = 4*i;
    }

    

    cout << "Before calling remove element function...." << endl;
    printArray(array, size);
    int* new_arr = removeElement(array, 0, size, new_size);

   
    printArray(new_arr, new_size);
    return 0;
}



void printArray(int arr[], int size)
{
    for (int i =0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int* removeElement(int arr[], int key, int size, int& new_size)
{
    cout << "After calling remove element function...." << endl;
    
    bool seen = false;
    int* temp = new int[size];
    // int new_arr[size];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != key)
        {   
            // cout << arr[i] << " ";
            
                /* code */
                temp[j] = arr[i];
                j++;
        }
        else{
            seen = true;
        }
    }

    if (seen == false)
    {
        cout << "There was no such element" << endl;
    }

    int* new_arr = new int[j];

    for (int i = 0; i < j; i++)
    {
        new_arr[i] = temp[i];
    }

    new_size = j;
    delete [] temp;
   return new_arr;
    
    
}