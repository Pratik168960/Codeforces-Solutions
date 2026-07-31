// Codeforces Problem 1850C
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 64; i++) {
            char c;
            cin >> c;
            if (c != '.') cout << c;
        }
        cout << "\n";
    }
    return 0;
}
