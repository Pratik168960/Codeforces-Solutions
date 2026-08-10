// Codeforces Problem 1343A
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    for (int k = 2; k <= 30; k++) {
        int div = (1 << k) - 1;
        
        if (n % div == 0) {
            cout << n / div << "\n";
            return;
        }
    }
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
