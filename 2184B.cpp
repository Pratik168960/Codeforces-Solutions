// Codeforces Problem 2184B
// Status: Accepted
// Language: C++


#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int t;
    (cin >> t) ;
 
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;
 
        long long n = m / k;    
        long long rem = m % k;  
 
            
        if (k < s && n % 2 != 0) {
            cout << (k - rem) << "\n";
        } else {
            long long ans = s - rem;
                if (ans < 0) ans = 0;
                cout << ans << "\n";
            }
        }
 
    return 0;
}
