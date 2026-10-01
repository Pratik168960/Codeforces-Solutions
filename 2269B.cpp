// Codeforces Problem 2269B
// Status: Accepted
// Language: C++


#include <iostream>
#include <map>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        cin >> n;
        
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
        
            int x;
            cin >> x;
            
            for (int step = 0; step < 100; step++) {
                
                int sum = 0;
                int temp = x;
                
                while (temp > 0) {
                    int d = temp % 10;
                    sum += d * d;
                    temp /= 10;
                }
                x = sum;
                
                
            }
            
            freq[x]++;
        }
        
        
        
        long long ans = 0;
        
        for (auto const& [val, count] : freq) {
            ans += (long long)count * (count - 1) / 2;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
