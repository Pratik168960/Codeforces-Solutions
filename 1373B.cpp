// Codeforces Problem 1373B
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int z = count(s.begin(), s.end(), '0');
        int o = s.size() - z;
        cout << (min(z, o) % 2 ? "DA\n" : "NET\n");
    }
    return 0;
}
