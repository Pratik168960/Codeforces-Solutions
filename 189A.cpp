// Codeforces Problem 189A
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>
using namespace std ;

int main() {
    
    int n, a, b, c, r = 0 ;
    cin >> n >> a >> b >> c ;
    
    for (int i = 0; i * a <= n; ++i) {
        for (int j = 0; i * a + j * b <= n; ++j) {
            
            int k = n - i * a - j * b ;
            
            if (k % c == 0) {
                r = max(r, i + j + k / c) ;
            }
            
        }
    }
    
    cout << r << "\n" ;
    
    
    return 0 ;
}
