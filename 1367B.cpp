// Codeforces Problem 1367B
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    
    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        int e = 0, o = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (i % 2 != a % 2) {
                if (a % 2 == 0) e++;
                else o++;
            }
        }
        if (e == o) cout << e << "\n";
        else cout << "-1\n";
    }
    return 0;
}
