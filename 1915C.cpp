// Codeforces Problem 1915C
// Status: Accepted
// Language: C++

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, n;
    long long v, s, r;
    cin >> t;
    while (t--) {
        cin >> n;
        s = 0;
        while (n--) {
            cin >> v;
            s += v;
        }
        r = sqrt(s);
        cout << (r * r == s ? "YES\n" : "NO\n");
    }
    return 0;
}
