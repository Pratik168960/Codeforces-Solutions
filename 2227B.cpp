// Codeforces Problem 2227B
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    

    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    
    int open_count = 0;
    for (char c : s) {
        if (c == '(') {
            open_count++;
        }
    }
    

    if (open_count == n / 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {

    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
