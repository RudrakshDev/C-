// #include <iostream>
// using namespace std;

// //return type void, int, float, double....
// int printHello()
// {
//     cout << "Hello WOrld";
//     cout << endl;
//     return 3;
// }

// int main() 
// {
//     // 2 two time it's repeating Hello World!....
//     // cout << "Hello WOrld";

//     // int a = 10;
//     // int b = 20;

//     // cout << "Hello WOrld";

//     // printHello();
//     // printHello();

//     int val = printHello();
//     cout << val;

//     // OR

//     cout << printHello();

//     return 0;
// }


// Parameters....

#include <iostream>
using namespace std;

// sum of 2 number
double sum(double a, double b)
{
    double s = a + b;
    return s;
}

// Min of 2 Number

double minOfTwo(double a, double b)
{
    double min = (a < b) ? a : b;
    return min;
}

double sumNumber(double n)
{
    double count = 0;
    for(int i = 0; i <= n; i++)
    {
        count += i;
    }
    return count;
}

double factorial(double n)
{
    double fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *=  i;
    }
    return fact;
}

int main() 
{
    // cout << sum(2,3) << "\n";
    // cout << sum(5,5) << "\n";
    // cout << sum(100.00,3.01) << "\n";

    // cout << "Minimum Number : " << min(1,2) << endl;
    // cout << "Minimum Number : " << min(5,2) << endl;
    // cout << "Minimum Number : " << min(50.211,50.212) << endl;
    // cout << "Minimum Number : " << min(50.211,50.211) << endl;

    // double count; 
    // cout << count << endl;

    // cout << "Total Sum" << ": " << sumNumber(20) << endl;
    // cout << "Total Sum" << ": " << sumNumber(2) << endl;
    // cout << "Total Sum" << ": " << sumNumber(0) << endl;


    // cout << "Factorial: " << factorial(5) << endl;
    // cout << "Factorial: " << factorial(2) << endl;
    // cout << "Factorial: " << factorial(1) << endl;
    // cout << "Factorial: " << factorial(0) << endl;

    

    return 0;
}

