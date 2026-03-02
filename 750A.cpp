// Codeforces Problem 750A
// Status: Accepted
// Language: C++ 

#include <iostream>
using namespace std ;

int main() {
    
    int n, k ;
    cin >> n >> k ;
    
    
    int t = 240 - k ;
    int ans = 0 ;
    
    
    
    for (int i = 1 ; i <= n ; ++i) {
        if (t >= 5 * i) {
            t -= 5 * i ;
            ans++ ;
        } else {
            break ;
        }
    }
    
    cout << ans << endl ;
    
    return 0 ;
} 
