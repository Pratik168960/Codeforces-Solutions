// Codeforces Problem 1883C
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int min_ops = k;
    int even_count = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (x % 2 == 0) {
            even_count++;
        }
        
        int rem = x % k;
        int ops = (rem == 0) ? 0 : k - rem;
        min_ops = min(min_ops, ops);
    }
    
    if (k == 4) {
        int ops_for_two_evens = max(0, 2 - even_count);
        min_ops = min(min_ops, ops_for_two_evens);
    }
    
    cout << min_ops << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
