// Codeforces Problem 80A
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;

    for (i = n + 1; ; i++) {
        bool p = true;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                p = false;
                break;
            }
        }
        if (p) break;
    }

    if (i == m) cout << "YES";
    else cout << "NO";

    return 0;
}
