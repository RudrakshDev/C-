#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 15;
    int arr[15] = {1,2,3,4,5,6,7,8,9,10};
    printArray(arr, n);
}