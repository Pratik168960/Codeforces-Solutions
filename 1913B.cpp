// Codeforces Problem 1913B
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
        int a = 0, b = 0, i = 0, n = s.size();
        
        for (char c : s) {
            c == '0' ? a++ : b++;
        }
        
        for (; i < n; i++) {
            if (s[i] == '0' && b) b--;
            else if (s[i] == '1' && a) a--;
            else break;
        }
        
        cout << n - i << '\n';
    }
    return 0;
}
