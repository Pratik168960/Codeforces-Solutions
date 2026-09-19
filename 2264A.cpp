// Codeforces Problem 2264A
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), p;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != i + 1) p.push_back(i);
        }
        
        int s = p.size();
        for (int i = 0; i < s / 2; i++) {
            swap(a[p[i]], a[p[s - 1 - i]]);
        }
        
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != i + 1) ok = false;
        }
        
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
