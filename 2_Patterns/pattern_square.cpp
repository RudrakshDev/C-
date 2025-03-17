// // Square Pattern
// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;  
// }

// Square Pattern ABCD

// Square Patbtern
// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;
//     for(int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for(int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;  
// }



// Q. n = 3 
// 123
// 456
// 789
// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 3;
//     int k = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n; j++)
//         {
//             cout << k << " ";
//             k++;
//         }
//         cout << endl;
//     }

//     return 0;  
// }

// Q. n = 3
// ABC
// DEF
// GHI
// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 3;
//     char ch = 'A';
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;  
// }

// Triangle Problem
// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }

//     return 0;  
// }

// Triangle Problem
// 1
// 22
// 333
// 4444
// 55555

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 6;
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;  
// }

// A
// BB
// CCC
// DDDD
// EEEEE

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 6;
//     for(int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;
//         for(int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

//     return 0;  
// }

// Triangle Pattern
// 1
// 12
// 123
// 1234

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;  
// }


// Reverse Triangle Pattern

// 1
// 21
// 321
// 4321

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i + 1; j > 0; j--)
//         {           
//             cout << j;
//         }
//         cout << endl; 
//     }

//     return 0;  
// }

// Floyd Triangle Problem

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;
//     int m = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout << m << " ";
//             m++;
//         }
//         cout << endl;
//     }

//     return 0;  
// }

// Floyd Triangle Problem

// A
// B C
// D E F
// G H I J
// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;
//     char ch = 'A';
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {   
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;  
// }


// Inverted Triangle Pattern

// 1 1 1 1
//   2 2 2
//     3 3
//       4

// #include <iostream>  
// using namespace std;

// int main()   
// {
//     int n = 4;

//     for(int i = 1; i <= n; i++)
//     {
//         //spaces
//         for(int j = 1; j <= i; j++)
//         {
//             cout << " ";
//         }

//         //number
//         for(int j = n; j >= i; j--)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;  
// }


// Pyramid Pattern

//     1
//    121
//   12321
//  1234321

// #include <iostream>  
// using namespace std;

// int main() 
// {
//     int n = 4;

//     for(int i = 0; i < n; i++)
//     {
//         //spaces

//         for(int j = 0; j < n-i-1; j++)
//         {
//             cout << " ";
//         }
        
//         // nums1:

//         for(int j = 1; j <= i+1; j++)
//         {
//             cout << j;
//         }

//         // nums2:

//         for(int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;  
// }

// Hollow Diamond Pattern

    //       *
    //   *      *     
    //  *         *       
    // *            *   
    //   *           *
    //     *       *
    //       *   * 
    //         * 
#include <iostream>  
using namespace std;

int main() 
{
    int n = 4;

    return 0;  
}