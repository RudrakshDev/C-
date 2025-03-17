// 1330 -> 13 notes of 100 rupees, 1 notes of 20 rupees, and 10 notes of 1 rupees.

#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter value of amount: ";
    cin >> amount;

    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "Number of 100 Rupees: " << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "Number of 50 Rupees: " << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "Number of 20 Rupees: " << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "Number of 1 Rupees: " << Rs1 << endl;
    }
    return 0;
}