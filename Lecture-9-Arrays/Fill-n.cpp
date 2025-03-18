#include<iostream>
using namespace std;

int main()
{
    int array[1000];
    fill_n(array, 1000, 24);
    cout << array[0] << " "<< array[1] << " " << array[100] << " " << array[999];
    return 0;
}