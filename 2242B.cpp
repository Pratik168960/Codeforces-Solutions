// LeetCode Problem 2242B
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), s(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s[i] = (i > 0 ? s[i - 1] : 0) + (a[i] <= 2 ? 1 : -1);
        }
        
        int p1 = (a[0] == 1 ? 1 : -1);
        int m = 1e9;
        bool ok = false;
        
        for (int j = 1; j < n - 1; j++) {
            if (p1 >= 0) m = min(m, s[j - 1]);
            if (s[j] >= m) {
                ok = true;
                break;
            }
            p1 += (a[j] == 1 ? 1 : -1);
        }
        
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
