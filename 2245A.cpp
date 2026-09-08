// Codeforces Problem 2245A
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>

using namespace std;

int main() {

    
    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;
            string s;
            cin >> s;
            
            if (2 * k > n) {
                cout << -1 << "\n";
                continue;
            }
            
            int c = 0;
            for (int i = 0; i < k; i++) {
                if (s[i] == 'L') c++;
            }
            
            for (int i = n - k; i < n; i++) {
                if (s[i] == 'R') c++;
            }
            
            cout << c << "\n";
        }
    }
    
    return 0;
}
