// Codeforces Problem 151A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <algorithm>
using namespace std ;

int main() {
    int n, k, l, c, d, p, nl, np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

    int t1 = (k * l) / nl ;
    int t2 = c * d ;
    int t3 = p / np ;

    int ans = min({t1, t2, t3}) / n ;

    cout << ans << endl ;

    return 0 ;
} 
