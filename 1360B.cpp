// Codeforces Problem 1360B
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        
        sort(a.begin(), a.end());
        int d = INT_MAX;
        
        for (int i = 1; i < n; ++i)
            d = min(d, a[i] - a[i - 1]);
            
        cout << d << '\n';
    } 
    return 0;
}
