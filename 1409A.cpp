// Codeforces Problem 1409A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << "\n";
    }
    return 0;
}
