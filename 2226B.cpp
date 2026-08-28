// Codeforces Problem 2226B
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    int good_subarrays = 0;
    


    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(p[i] - p[i+1]);
        int current_gcd = std::gcd(p[i], p[i+1]);
        
        if (diff == current_gcd) {
            good_subarrays++;
        }
    }
    
    cout << good_subarrays << "\n";
}

int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
