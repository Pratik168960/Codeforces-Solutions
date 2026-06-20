// Codeforces Problem 1475B
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;


int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int y = n % 2020;
        int k = n / 2020;
        
        if (y <= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
