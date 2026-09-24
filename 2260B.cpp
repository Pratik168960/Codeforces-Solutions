// Codeforces Problem 2260B
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            long long x, y, k;
            cin >> x >> y >> k;
            
            long long d = y - x;
            long long ans = 0;
            
            for (long long i = 0; i < k; i++) {
                if (x + i > d) {
                    ans += (k - i) * d;
                    break;
                }
                ans += d % (x + i);
            }
            
            cout << ans << "\n";
        }
    }
    return 0;
}
