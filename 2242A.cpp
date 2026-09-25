// Codeforces Problem 2242A
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std ;


int main() {
    
    
    int t;
    

    while (t--) {
        
        int k;
        cin >> k;
        
        int c2 = 0, c3 = 0;
        
        for (int i = 0; i < k; i++) {
            int c;
            cin >> c;
            if (c >= 2) c2++;
            if (c >= 3) c3++;
        }
        
        if (c3 > 0 || c2 > 1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
    
    return 0;
}
