// Codeforces Problem 2225B
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>

using namespace std;



int main() {

    
    int t;
    cin >> t ;
    
    
    while(t--){
        string s;
        cin >> s ;
        
        int faults = 0 ;
        
        
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                faults++;
            }
        }
        
        
        
        if (faults <= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl ;
        }
    }
    
    return 0;
}
