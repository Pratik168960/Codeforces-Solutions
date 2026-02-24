// Codeforces Problem 427A
// Status: Accepted
// Language: C++   

#include <iostream>
using namespace std ;

int main() {
    int n, p = 0, c = 0, x ;
    cin >> n ;
    
    while (n--) {
        cin >> x ;
        
        if (x > 0) {
            p = p + x ;
        } else {
            if (p > 0) {
                p = p - 1 ;
            } else {
                c = c + 1 ;
            }
        }
    }
    
    cout << c << endl ;
    
    return 0;
} 
