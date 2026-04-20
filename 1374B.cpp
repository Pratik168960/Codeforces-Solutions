// Codeforces Problem 1374B
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x = 0, y = 0;
        cin >> n;
        while (n % 2 == 0) {
            n /= 2;
            x++;
        }
        while (n % 3 == 0) {
            n /= 3;
            y++;
        }
        if (n == 1 && x <= y) {
            cout << 2 * y - x << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
