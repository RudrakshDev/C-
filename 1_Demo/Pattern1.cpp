#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch;
    
    for (int i = 1; i <= n; i++) {
        ch = 'A';
        for (int j = 1; j <= n - i + 1; j++) {
            cout << ch;
            ch++;
        }

        for (int j = 1; j <= 2 * (i - 1); j++) {
            cout << " ";
        }

        ch = 'A' + (n - i);
        for (int j = 1; j <= n - i + 1; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}
