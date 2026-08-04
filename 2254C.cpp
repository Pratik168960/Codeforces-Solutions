// Codeforces Problem 2254C
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int a_even = 0, a_odd = 0;
    int b_even = 0, b_odd = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0) a_even++;
            else a_odd++;
        }
        if (b[i] == '1') {
            if (i % 2 == 0) b_even++;
            else b_odd++;
        }
    }

    if (a_even == b_even && a_odd == b_odd) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
