// Codeforces Problem 1742B
// Status: Accepted
// Language: C++

#include <iostream>
#include <set>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> x;
            s.insert(x);
        }
        cout << (s.size() == n ? "YES\n" : "NO\n");
    }
}
