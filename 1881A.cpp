// Codeforces Problem 1881A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
using namespace std;

int main() {

    int t, n, m, i;
    string x, s;
    cin >> t;
    while (t--) {
        cin >> n >> m >> x >> s;
        for (i = 0; i < 6; ++i) {
            if (x.find(s) != -1) {
                cout << i << '\n';
                break;
            }
            x += x;
        }
        if (i == 6) cout << "-1\n";
    }
    return 0;
}
