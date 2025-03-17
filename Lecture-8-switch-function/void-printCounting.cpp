#include<iostream>
using namespace std;

void printCouting(int n)
{
    for(int i = 1; i <=n; i++)
    {
        cout << endl << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    printCouting(n);
}