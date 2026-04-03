// Codeforces Problem 1829B
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, m = 0, c = 0;
        cin >> n;
        while (n--) {
            cin >> a;
            if (a == 0) {
                c++;
                m = max(m, c);
            } else {
                c = 0;
            }
        }
        cout << m << "\n";
    }
    return 0;
}
