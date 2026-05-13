// Codeforces Problem 1343B
// Status: Accepted
// Language: C++ 

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 4 != 0) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    int k = n / 2;
    
    for (int i = 1; i <= k; i++) cout << i * 2 << " ";
    for (int i = 1; i < k; i++) cout << i * 2 - 1 << " ";
    
    cout << k * 3 - 1 << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
} 
