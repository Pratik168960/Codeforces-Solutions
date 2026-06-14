// LeetCode Problem 1520A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    
    while (t--) {
        cin >> n >> s;
        int v[256] = {0}, ok = 1;
        char last = 0;
        
        for (char c : s) {
            if (v[c] && c != last) ok = 0;
            v[c] = 1;
            last = c;
        }
        
        cout << (ok ? "YES\n" : "NO\n");
    }
    
    return 0;
}
