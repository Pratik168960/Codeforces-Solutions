// Codeforces Problem 1374A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    
    int t, x, y, n;
    cin >> t;
    
    while (t--) {
        cin >> x >> y >> n;
        cout << (n - y) / x * x + y << "\n";
    }
    
    return 0;
}
