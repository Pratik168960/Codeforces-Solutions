// Codeforces Problem 758A
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    int m = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        m = max(m, a[i]);
    }
    
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += m - a[i];
    }
    
    cout << s << "\n";
    return 0;
} 
