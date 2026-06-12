// Codeforces Problem 1878C
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        
        if (x >= k * (k + 1) / 2 && x <= k * (2 * n - k + 1) / 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
