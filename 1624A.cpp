// Codeforces Problem 1624A
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mn = INT_MAX, mx = 0;
        while (n--) {
            int a;
            cin >> a;
            mn = min(mn, a);
            mx = max(mx, a);
        }
        cout << mx - mn << "\n";
    }
    return 0;
}
