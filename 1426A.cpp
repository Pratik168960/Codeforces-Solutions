// Codeforces Problem 1426A
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        if (n <= 2) {
            cout << 1 << '\n';
        } else {
            cout << 1 + (n - 3 + x) / x << '\n';
        }
    }
    return 0;
}
