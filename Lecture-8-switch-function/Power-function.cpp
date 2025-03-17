// #include<iostream>
// using namespace std;

// int power()
// {
//     int a,b;

//     cout << "Enter value of a: ";
//     cin >> a;
//     cout << "Enter value of b: ";
//     cin >> b;

//     int ans = 1;

//     for(int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main()
// {
//     cout << "Answer: " << power() << endl;
//     cout << "Answer: " << power() << endl;
//     return 0;
// }

// OROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROROR

#include<iostream>
using namespace std;

int power(int num1, int num2)
{
    int ans = 1;

    for(int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a,b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Answer: " << power(a, b) << endl;

    
    int c,d;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "Enter value of d: ";
    cin >> d;

    cout << "Answer: " << power(c, d) << endl;
    return 0;
}