// Codeforces Problem 1703B
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        set<char> u(s.begin(), s.end());
        cout << n + u.size() << "\n";
    }
    return 0;
}
