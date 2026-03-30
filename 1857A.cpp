// Codeforces Problem 1857A
// Status: Accepted
// Language: C++ 

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            s += x;
        }
        if (s % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
