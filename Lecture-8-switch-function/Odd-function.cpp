#include<iostream>
using namespace std;

bool isEven(int a)
{
    // 1 -> even
    // 0 -> odd

    if(a & 1)
    {
        //odd
        return 0;
    }
    else
    {
        //even
        return 1;   
    }
}

int main()
{
    int a;
    cout << "Enter Value of a: ";
    cin >> a;

    if(isEven(a))
    {
        cout << a << " Is Even";
    }
    else
    {
        cout << a << " Is odd";
    }
}