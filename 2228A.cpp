// Codeforces Problem 2228A
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n, c0 = 0, c1 = 0, c2 = 0, w;
        cin >> n;
        while (n--) {
            cin >> w;
            if (w == 0) c0++;
            else if (w == 1) c1++;
            else c2++;
        }
        int p = min(c1, c2);
        cout << c0 + p + abs(c1 - c2) / 3 << endl ;
    }
    return 0;
}
