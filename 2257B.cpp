// Codeforces Problem 2257B
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    long long a1, b1, temp;
    cin >> a1;
    for (int i = 1; i < n; i++) {
        cin >> temp;
    }
    
    cin >> b1;
    for (int i = 1; i < m; i++) {
        cin >> temp;
    }
    
    long long healthA = a1 + n - 1;
    long long healthB = b1 + m - 1;
    
    if (healthA >= healthB) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
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
