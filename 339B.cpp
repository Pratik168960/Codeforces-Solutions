// Codeforces Problem 339B
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std ;

int main() {
    
    long long n, m, a = 0, c = 1, x ;
    cin >> n >> m ;
    
    while (m--) {
        cin >> x ;
        if (x >= c) {
            a += x - c ;
        } else {
            a += n - c + x ;
        }
        c = x ;
    }
    
    cout << a << "\n" ;
    return 0 ;
    
}
