// LeetCode Problem 2246B
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        cin >> n;
        
        if (n == 2) {
            cout << -1 << endl ;
        } else if (n == 1) {
            cout << 1 << endl ;
        } else {
            cout << 1 << " " << 2 << " ";
            long long val = 3;
            for (int i = 3; i <= n; i++) {
                cout << val << " ";
                val *= 2;
            }
            cout << endl ;
        }
    }
    return 0;
}
