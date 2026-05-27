// Codeforces Problem 1433A
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l = s.size();
        cout << (s[0] - '0' - 1) * 10 + l * (l + 1) / 2 << '\n';
    }
    return 0;
}
