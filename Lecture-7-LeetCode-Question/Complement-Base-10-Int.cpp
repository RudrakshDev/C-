#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Value of n: ";
    cin >> n;

    int x = 1;

    if(n == 0)
    {
        return 1;
    }

    while(x <= n)
    {
        n = n ^ x;
        x = x << 1;
    }

    cout << n;

    return 0;
}