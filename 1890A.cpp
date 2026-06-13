// Codeforces Problem 1890A
// Status: Accepted
// Language: C++


#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n;
        map<int, int> m;
        
        while (n--) cin >> x, m[x]++;
        
        if (m.size() > 2) cout << "No\n";
        else cout << (abs(m.begin()->second - m.rbegin()->second) <= 1 ? "Yes\n" : "No\n");
    }
}
