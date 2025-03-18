#include<iostream>
using namespace std;

int Sum_Of_Array(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size: ";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Total Sum: " << Sum_Of_Array(arr, size);
}