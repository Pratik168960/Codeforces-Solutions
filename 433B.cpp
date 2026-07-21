// Codeforces Problem 433B
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> v(n), u(n);
    vector<long long> p1(n + 1, 0), p2(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        u[i] = v[i];
        p1[i + 1] = p1[i] + v[i];
    }
    
    sort(u.begin(), u.end());
    
    for (int i = 0; i < n; ++i) {
        p2[i + 1] = p2[i] + u[i];
    }
    
    int m;
    cin >> m;
    
    while (m--) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            cout << p1[r] - p1[l - 1] << "\n";
        } else {
            cout << p2[r] - p2[l - 1] << "\n";
        }
    }
    
    return 0;
}
