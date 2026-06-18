// Codeforces Problem 1853A
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        cin >> n;
        
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int min_diff = INT_MAX;
        bool already_unsorted = false;
        
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i+1]) {
                already_unsorted = true;
                break;
            }
            min_diff = min(min_diff, a[i+1] - a[i]);
        }
        
        
        if (already_unsorted) {
            cout << 0 << "\n";
        } else {
            cout << (min_diff / 2) + 1 << "\n";
        }
    }
    
    return 0;
}
