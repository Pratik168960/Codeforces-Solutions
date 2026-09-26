// Codeforces Problem 2242A
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
    
        int k, c, c2 = 0, c3 = 0;
        cin >> k;
        
        while (k--) {
            cin >> c;
            if (c > 1) c2++;
            if (c > 2) c3++;
        }
        
        if (c3 > 0 || c2 > 1) cout << "YES\n";
        else cout << "NO\n";
    
    }
    
    return 0;
}
