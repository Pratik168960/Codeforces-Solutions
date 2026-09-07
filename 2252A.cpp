// Codeforces Problem 2252A
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> f(1005, 0);
    int sum = 0, mc = 0, mv = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        f[x]++;
        if (f[x] > mc) {
            mc = f[x];
            mv = x;
        }
    }
    
    int o = n - mc;
    if (mc > o + 2) {
        sum -= (mc - (o + 2)) * mv;
    }
    
    cout << sum << "\n";
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
