// // Sum of all number from 1 to N which are divisible by 3.
#include <iostream>  
using namespace std;

int main() 
{
    int sum = 0;
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " that are divisible by 3: ";
    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
        {
            cout << i << " + ";
            sum = sum + i;
        }
    }
    cout << "= " << sum << endl;

    return 0;  
}


// Print Factorial Of N

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int count, n, fact = 1;
//     cout << "Enter Number :";
//     cin >> n;
//     for(int i = 1; i <= n; i++)
//     {
//         // cout << i << " ";
//         fact = fact * i;
//     }

//     cout << "Factorial of " << n << " is " << fact;

//     return 0;  
// }