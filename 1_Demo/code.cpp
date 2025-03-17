#include <iostream>
using namespace std;

int main(){
    int age = 25;
    cout << age << endl;
    cout << sizeof(age) << endl;
    
    char grade = 'a';
    cout << grade << endl;
    cout << sizeof(grade) << endl;
    
    float PI = 3.14f;
    cout << PI << endl;
    cout << sizeof(PI) << endl;

    bool isSafe = true;
    cout << isSafe << endl;

    double large = 100.8293453;
    cout << large << endl;

    // Type Conversion  small -> big (Done Automatically)
    int CharValue = grade;
    cout << CharValue << endl;

    //Type Casting big -> small (To be done by manually)
    double value = 100.99;
    int newValue = (int)value;
    cout << newValue << endl;

    // Input in C++
    int age1;
    cout << "Enter Your Age: ";
    cin >> age1;
    cout << "Your Age : " << age1 << endl;

    // Sum of Two Number

    int num1, num2;
    cout << "Enter Your Number 1: ";
    cin >> num1;
    cout << "\nEnter Your Number 2: ";
    cin >> num2;
    int sum = (num1 + num2);
    cout << "\nSum of Two Number : " << sum  << endl;

    return 0;
}