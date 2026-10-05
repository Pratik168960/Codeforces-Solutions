// Codeforces Problem 2266C
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    
    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (s[0] == '1') {
            int c = 0;
            for (char ch : s) {
                if (ch == '0') c++;
            }
            cout << c << "\n";
        } else {
            int z = 0;
            for (char ch : s) {
                if (ch == '0') z++;
            }
            
            int mn = n;
            int o = 0;
            
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    z--;
                } else {
                    o++;
                }
                mn = min(mn, o + z);
            }
            
            cout << mn << endl ;
        }
    }
    
    return 0;
}
