// CodeForces Problem 2227A
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    
    if (x % 2 != 0 && y % 2 != 0) {
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
