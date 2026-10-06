// Codeforces Problem 2245B
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
        
        int n;
        long long c;
        cin >> n >> c;
        
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.rbegin(), a.rend());
        
        long long sum = 0;
        long long ans = -4000000000000000000LL;
        
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (i + 1 >= (n + 1) / 2) {
                ans = max(ans, sum - (i + 1) * c);
            }
        }
        
        cout << ans << endl ;
    }
    
    return 0;
}
