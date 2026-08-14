// Codeforces Problem 1791B
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y = 0;
    bool found = false;

    for (char move : s) {
        if (move == 'U') {
            y++;
        } else if (move == 'D') {
            y--;
        } else if (move == 'R') {
            x++;
        } else if (move == 'L') {
            x--;
        }

        if (x == 1 && y == 1) {
            found = true;
            break; 
        }
    }

    if (found) {
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
