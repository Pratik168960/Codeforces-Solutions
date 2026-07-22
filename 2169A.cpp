// Codeforces Problem 2169A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, v, x = 0, y = 0;
        cin >> n >> a;
        for (int i = 0; i < n; i++) {
            cin >> v;
            if (v < a) x++;
            if (v > a) y++;
        }
        if (x > y) cout << a - 1 << "\n";
        else cout << a + 1 << "\n";
    }
    return 0;
}
