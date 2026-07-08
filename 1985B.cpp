// Codeforces Problem 1985B
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        if (n == 3) {
            cout << 3 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
    
    return 0;
}
