// Codeforces Problem 2263A
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0, x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            c += x;
        }
        
        if (c > (n - 1) / 2) {
            cout << "Bessie\n";
        } else {
            cout << "Elsie\n";
        }
    }
    return 0;
}
