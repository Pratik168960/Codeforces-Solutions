// Codeforces Problem 2248B
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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        
        if (n < 2 * m) {
            cout << "NO\n";
            continue;
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (a[i] > b[i] || a[n - m + i] < b[i]) {
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
