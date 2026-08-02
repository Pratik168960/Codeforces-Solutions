// Codeforces Problem 1294A
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, a, b, c, n, m, d;
    cin >> t;
    
    while (t--) {
        cin >> a >> b >> c >> n;
        
        m = max({a, b, c});
        d = (m - a) + (m - b) + (m - c);
        
        if (n >= d && (n - d) % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
