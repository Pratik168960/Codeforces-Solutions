// Codeforces Problem 703A
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

int main() {
    int n, m, c, mw = 0, cw = 0;
    if (cin >> n) {
        while (n--) {
            cin >> m >> c;
            if (m > c) mw++;
            else if (c > m) cw++;
        }
        if (mw > cw) cout << "Mishka\n";
        else if (cw > mw) cout << "Chris\n";
        else cout << "Friendship is magic!^^\n";
    }
    return 0;
}
