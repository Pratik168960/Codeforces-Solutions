// Codeforces Problem 1877A
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

int main() {
    int t, n, a, s;
    cin >> t;
    while (t--) {
        cin >> n;
        s = 0;
        for (int i = 1; i < n; ++i) {
            cin >> a;
            s += a;
        }
        cout << -s << "\n";
    }
    return 0;
}
