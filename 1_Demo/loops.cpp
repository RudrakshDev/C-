// While Loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int count = 1;

//         while (count <= 5)
//         {
//             cout << count << " ";
//             count++;
//         }

//     return 0;
// }

// Q. Sum from 1 to N

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 6;
//     int count = 0;
//     for(int i = 0; i <= n; i++)
//     {
//         count += i;
//     }
//     cout << count << " ";

//     return 0;
// }

// Q. Sum of all odd number from 1 to N

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int count = 0;
//     for(int i = 0; i <= n; i++)
//     {
//         if(i % 2 != 0)
//         {
//             count += i;
//         }
//     }
//     cout << count << " ";

//     return 0;
// }

// Do while Loop

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 0;
//     int i = 1;

//     do
//     {
//         cout << i << " ";
//         i++;
//     }
//     while(i <= n);

//     return 0;  
// }

// Number is prime or not

#include <iostream>  
using namespace std;

int main() 
{
    int n = 10;
    bool isPrime = true;

    if (n <= 1) {
        cout << n << " is Non-Prime";
        return 0;
    }

    for(int i = 2; i <= n - 1; i++) 
    {
        if(n % i == 0) 
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << n << " is Prime";
    else
        cout << n << " is Non-Prime";

    return 0;  
}
