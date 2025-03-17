// 191. Number of 1 Bits

#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int count = 0;

    while(n != 0)
    {
        if(n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    cout << "Number of 1 : " << count;

    return 0;
}