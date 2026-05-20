// Codeforces Problem 2230B
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
        
        int x = 0, y = 0;
        for (char c : s) {
            if (c == '2') {
                x++;
            } else if (c != '4') {
                y = max(x, y) + 1;
            }
        }
        
        cout << s.length() - max(x, y) << "\n";
    }
    
    return 0;
}
