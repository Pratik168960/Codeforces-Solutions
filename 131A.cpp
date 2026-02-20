// Codeforces Problem 131A
// Status: Accepted
// Language: C++   

#include <iostream>
#include <string>
using namespace std ;

int main() {
    string s ; 
    cin >> s ;
    
    int n = s.length() ;
    int c = 0 ;
    
    for (int i = 1 ; i < n ; i++) {
        if (s[i] < 'a') {
            c++ ;
        }
    }
    
    if (c == n - 1) {
        for (int i = 0 ; i < n ; i++) {
            if (s[i] >= 'a') {
                s[i] -= 32 ;
            } else {
                s[i] += 32;
            }
        }
    }
    
    cout << s << endl ;
    
    return 0 ;
}
