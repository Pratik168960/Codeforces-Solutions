// Codeforces Problem 2254B
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int L = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) {
            L++;
        }
    }

    int max_dec = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i] != s[i-1] && s[i] != s[i+1]) {
            if (s[i-1] == s[i+1]) {
                max_dec = max(max_dec, 2);
            } else {
                max_dec = max(max_dec, 1);
            }
        }
    }

    cout << L - max_dec << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
