// LeetCode Problem 2247A
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, c = 0;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == -1) c++;
        }
        
        if (n % 2 == 0 && c % 2 == (n / 2) % 2) {
            cout << "YES" << endl ;
        } else {
            cout << "NO" << endl ;
        }
    }
    return 0;
}
