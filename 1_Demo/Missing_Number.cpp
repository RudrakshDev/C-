#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
    int total_sum = (n + 1) * (n + 2) / 2;

    int array_sum = 0;
    for (int i = 0; i < n; i++)
    {
        array_sum += arr[i];
    }

    return total_sum - array_sum;
}

int main()
{
    int arr1[] = {3, 2, 4, 6, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "The missing element is " << findMissingNumber(arr1, n1) << endl;
    return 0;
}
