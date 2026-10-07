// Codeforces Problem 2237A
// Status: Accepted
// Language: C++


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long ans = 0, mn = 1e9;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            mn = min(mn, x);
            ans += mn;
        }
        cout << ans << "\n";
    }
    return 0;
}
