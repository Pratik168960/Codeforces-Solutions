// Codeforces Problem 2258A
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << gcd(a[0], a.back()) << endl;
    }
    return 0;
}
