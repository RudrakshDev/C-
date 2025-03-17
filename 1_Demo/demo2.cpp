#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    cout << "Your Character : " << ch << endl;

    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if(ch >= 'a' && ch <= 'z')
        {
            cout << "Character is lowercase";
        }
        else
        {
            cout << "Character is uppercase";
        }
    }
    else
    {
        cout << "Enter Character Only";
    }
    



    // if(ch >= 65 && ch <= 90)
    // {
    //     cout << "Character is uppercase";
    // }
    // else
    // {
    //     cout << "Character is lowercase";
    // }
    return 0;
}