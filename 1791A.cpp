// Codeforces Problem 1791A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

int main() {
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--) {
        char c;
        cin >> c;
        if (count(s.begin(), s.end(), c)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
} 
