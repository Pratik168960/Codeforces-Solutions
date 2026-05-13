// Codeforces Problem 1722A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if (n == 5) {
            sort(s.begin(), s.end());
            if (s == "Timru") {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
