// Codeforces Problem 1360A
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int min_side = min(a, b);
        int max_side = max(a, b);
        
        int square_side = max(2 * min_side, max_side);
        
        cout << square_side * square_side << "\n";
    }
    
    return 0;
}
