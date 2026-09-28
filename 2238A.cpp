// LeetCode Problem 2238A
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
    
        int n, c;
        cin >> n >> c;
        
        vector<int> a(n), b(n);
        int diff = 0;
        bool direct_ok = true;
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            
            cin >> b[i];
            
            if (a[i] < b[i]) direct_ok = false;
            diff += a[i] - b[i];
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        bool sort_ok = true;
        
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) sort_ok = false;
        }
        
        if (!sort_ok) cout << -1 << "\n";
        else if (direct_ok) cout << diff << "\n";
        else cout << diff + c << "\n";
    }
    return 0;
}
