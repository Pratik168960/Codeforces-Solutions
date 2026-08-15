// Codeforces Problem 2256A
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    vector<long long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    
    sort(a.begin(), a.end());
    
    long long original_range = a[2] - a[0];
    
    long long new_range = a[1]; 
    
    cout << min(original_range, new_range) << "\n";
}

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
