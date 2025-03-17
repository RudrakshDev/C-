#include <iostream>
using namespace std;

int trailingZeroesInFactorial(int n) {
    int sum = 0;
    while (n / 5 > 0) {
        sum += n / 5;
        n /= 5;
    }
    return sum;
}

int main() {
    cout << trailingZeroesInFactorial(150) << endl;
    return 0;
}