// Codeforces Problem 1873B
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    a[0]++;
    
    long long p = 1;
    for (int i = 0; i < n; ++i) {
        p *= a[i];
    }
    
    cout << p << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
