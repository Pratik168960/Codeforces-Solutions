// Codeforces Problem 1866A
// Status: Accepted
// Language: C++

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, a, m = 1e6;
    cin >> n;
    while (n--) {
        cin >> a;
        m = min(m, abs(a));
    }
    cout << m;
    return 0;
}
