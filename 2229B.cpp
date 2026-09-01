// Codeforces Problem 2229B
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    long long sum_max = 0;
    long long max_min = 0;
    
    for (int i = 0; i < n; i++) {
        long long M = max(a[i], b[i]);
        long long m = min(a[i], b[i]);
        
        sum_max += M;
        max_min = max(max_min, m);
    }
    
    cout << sum_max + max_min << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
