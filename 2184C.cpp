// Codeforces Problem 2184C
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        if (n < k) {
            cout << -1 << "\n";
            continue;
        }
 
        long long l = k;
        long long r = k;
        int time = 0;
        bool found = false;
 
        while (l <= n) {
            if (n <= r) {
                cout << time << "\n";
                found = true;
                break;
            }
 
            l = 2 * l - 1;
            r = 2 * r + 1;
            time++;
        }
 
        if (!found) {
            cout << -1 << "\n";
        }
    }
    
    return 0;
}
