// 1281. Subtract the Product and Sum of Digits of an Integer

#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int product = 1, sum = 0;

    while(n != 0)
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "Product : " << product << " Sum : " << sum << endl;

    int result = product - sum;
    // cout << "Result : " << result;
    return result;

    return 0;
}