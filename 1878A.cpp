// Codeforces Problem 1878A
// Status: Accepted
// Language: C++ 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, a;
        cin >> n >> k;
        bool ok = false;
        while (n--) {
            cin >> a;
            if (a == k) ok = true;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
