#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool isPower = false;

    for(int i = 0; i <= 30; i++)
    {
        int ans = pow(2,i);
        if(ans == n)
        {
            isPower = true;
        }
    }

    if(isPower == true)
    {
        cout << "Answer: true" << endl;
    }
    else
    {
        cout << "Answer: false" << endl;
    }
}