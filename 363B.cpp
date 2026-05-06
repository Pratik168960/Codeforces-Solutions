// Codeforces Problem 363B
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    if (!(cin >> n >> k)) return 0;
    
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    
    int s = 0, m, j = 1;
    for (int i = 0; i < k; ++i) {
        s += h[i];
    }
    m = s;
    
    for (int i = k; i < n; ++i) {
        s += h[i] - h[i - k];
        if (s < m) {
            m = s;
            j = i - k + 2;
        }
    }
    
    cout << j << "\n";
    return 0;
}
