// Codeforces Problem 474B
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int n, m, x, s = 0;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> x;
        s += x;
        a[i] = s;
    }
    
    cin >> m;
    while(m--) {
        cin >> x;
        cout << lower_bound(a.begin(), a.end(), x) - a.begin() + 1 << "\n";
    }
    
    return 0;
}
