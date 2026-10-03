// Codeforces Problem 2267A
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        char c;
        cin >> n >> c;
        
        string s;
        cin >> s;
        
        int ans = 0;
        
        for (int i = 0; i < n / 2; i++) {
            
            if (s[i] != s[n - 1 - i]) {
                
                if (s[i] == c || s[n - 1 - i] == c) {
                    ans += 1;
                } else {
                    ans += 2;
                }
                
            }
        }
        
        cout << ans << endl ;
    }
    
    
    return 0;
}
