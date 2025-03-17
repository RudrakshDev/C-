#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "\nEnter the value of b: ";
    cin >> b;

    char op;
    cout << "\nEnter the operation you want to perform: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;

    default: cout <<"Enter Valid Operation";
    }

    return 0;
}