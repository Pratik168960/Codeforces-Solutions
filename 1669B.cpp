// Codeforces Problem 1669B
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
        
        vector<int> count(n + 1, 0);
        int ans = -1;
        
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            
            count[x]++;
            
            if (count[x] == 3) {
                ans = x;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
