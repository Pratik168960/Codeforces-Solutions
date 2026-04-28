// Codeforces Problem 490A
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    
    vector<int> a, b, c;
    
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (x == 1) a.push_back(i);
        if (x == 2) b.push_back(i);
        if (x == 3) c.push_back(i);
    }
    
    int w = min({a.size(), b.size(), c.size()});
    cout << w << "\n";
    
    for (int i = 0; i < w; ++i) {
        cout << a[i] << " " << b[i] << " " << c[i] << "\n";
    }
    
    return 0;
}
