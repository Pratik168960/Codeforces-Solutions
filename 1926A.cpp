// Codeforces Problem 1926A
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
        string s;
        cin >> s;
        cout << (count(s.begin(), s.end(), 'A') > 2 ? 'A' : 'B') << '\n';
    }
}
