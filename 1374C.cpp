// Codeforces Problem 1374C
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    
    int t, n, c;
    string s;
    
    cin >> t;
    while (t--) {
        cin >> n >> s;
        c = 0;
        for (char x : s) {
            if (x == '(') {
                c++;
            } else if (c > 0) {
                c--;
            }
        }
        cout << c << "\n";
    }
    
    return 0;
}
