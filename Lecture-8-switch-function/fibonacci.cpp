#include<iostream>
using namespace std;;

void fibonacci()
{
    int n;
    cout << "Enter Number of n: ";
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
}

int main()
{
    fibonacci();
}