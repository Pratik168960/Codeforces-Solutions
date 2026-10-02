// Codeforces Problem 2267B
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
        vector<int> count(105, 0);
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            count[x]++;
        }
        
        int remaining = n;
        
        while (remaining > 0) {
        
            for (int i = 100; i >= 1; i--) {
        
                if (count[i] > 0) {
        
                    cout << i << " ";
                    count[i]--;
                    remaining--;
                }
            }
        }
        
        cout << endl;
    }
    return 0;
}
