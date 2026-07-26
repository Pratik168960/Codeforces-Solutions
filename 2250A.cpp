// Codeforces Problem 2250A
// Status: Accepted
// Language: C++


#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n, w;
    cin >> n;
    int a = 2e9, b = -1;
    for (int i = 0; i < n; ++i) {
        cin >> w;
        if (i % 2 == 0) a = min(a, w);
        else b = max(b, w);
    }
    if (n % 2 == 0 && a - b >= 2) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t ; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
