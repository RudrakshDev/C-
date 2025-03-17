//......... How to exit a loop without using break that is by exit(0).....

#include<iostream>
using namespace std;

int main()
{
    int num = 1;
    while(1)
    {
        switch (num)
        {
        case 1:
            break;
        
        default:
            break;
        }
        exit(0);
    }

    return 0;
}