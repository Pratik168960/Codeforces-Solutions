// Codeforces Problem 1619A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
    
        string s;
        cin >> s;
    
        int n = s.size();
    
        if (n % 2 == 0 && s.substr(0, n / 2) == s.substr(n / 2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
