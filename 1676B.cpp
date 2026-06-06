// Codeforces Problem 1676B
// Status: Accepted
// Language: C++

#include <iostream>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x, m = INT_MAX;
        long long s = 0;
        
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x < m) m = x;
            s += x;
        }
        
        cout << s - 1LL * n * m << "\n";
    }
    
    return 0;
}
