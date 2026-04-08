// Codeforces Problem 1901A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int m = 0;
    int p = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        m = max(m, a - p);
        p = a;
    }
    
    m = max(m, 2 * (x - p));
    
    cout << m << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
