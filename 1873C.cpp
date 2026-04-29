// Codeforces Problem 1873C
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r = 0;
        char c;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                cin >> c;
                if (c == 'X') {
                    r += min({i, 9 - i, j, 9 - j}) + 1;
                }
            }
        }
        cout << r << endl ;
    }
    return 0;
}
