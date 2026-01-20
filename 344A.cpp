// Codeforces Problem 344A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std ;
 
int main() {
 
    int n;
    
    if (cin >> n) {
        
        int groups = 0 ;
        int prev = -1 ;
        
        for (int i = 0; i < n; i++) {
            
            int curr;
            cin >> curr ;
            
            if (curr != prev) {
                groups++ ;
                prev = curr ;
            }
        }
        
        cout << groups << endl ;
    }
    
    
    return 0 ;
}
