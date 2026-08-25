// Codeforces Problem 2225A
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;
    
    if (y / x == 2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
