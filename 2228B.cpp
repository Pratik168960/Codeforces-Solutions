// Codeforces Problem 2228B
// Status: Accepted
// Language: C++


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        
        long long d = min(abs(x1 - x2), n - abs(x1 - x2));
        
        if (n <= 3) {
            cout << d << "\n";
        } else {
            cout << d + k << "\n";
        }
    }
    
    return 0;
}
