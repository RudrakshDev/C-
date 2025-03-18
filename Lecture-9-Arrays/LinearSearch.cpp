#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
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

    int key;
    cout << "Enter the number you want to search: ";
    cin >> key;

    if(search(arr, size, key))
    {
        cout << endl << key << " Key Found..." << endl;
    }
    else
    {
        cout << endl << key << " Key Not Found..." << endl;
    }
}