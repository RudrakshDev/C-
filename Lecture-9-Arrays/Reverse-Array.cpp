#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size -1;
    int reverse;

    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter the value: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    printarray(arr, size);
    cout << endl;
    reverse(arr, size);
    cout << endl;
    printarray(arr, size);
    return 0;
}