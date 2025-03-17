#include<iostream>
using namespace std;

int factorial(int num1)
{
    int fact = 1;

    for(int i = 1; i <= num1; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCR(int n, int r)
{
    int num = factorial(n);
    int demo = factorial(r) * factorial(n-r);
    return num/demo;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "Answer is " << nCR(n, r) << endl;
    return 0;
}