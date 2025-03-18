#include<iostream>
using namespace std;

int getMin(int arr[], int size)
{
    // int min = INT16_MAX;
    int mini = INT16_MAX;

    for(int i = 0; i < size; i++)
    {
        // if(arr[i] < min)
        // {
        //     min = arr[i];
        // }

        // OR

        mini = min(mini, arr[i]);

    }
    // return min;
    return mini;
}

int getMax(int arr[], int size)
{
    // int max = INT16_MIN;
    int maxi = INT16_MIN;

    for(int i = 0; i < size; i++)
    {
        // if(arr[i] > max)
        // {
        //     max = arr[i];
        // }

        // OR

        maxi = max(maxi, arr[i]);
    }
    // return max;
    return maxi;
}

int main()
{
    int arr[100];
    int size;
    cin >> size;
    int i;

    for(i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl << "Min Number: " << getMin(arr, size) << endl << "Max Number: " << getMax(arr, size);
    return 0;
}