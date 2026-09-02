// Codeforces Problem 2229C1
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector<int> ops;
    bool flipped = false;
    

    for (int i = n; i >= 1; i--) {
        long long current_val = flipped ? -a[i] : a[i];
        
    
        if (current_val > 0) {
            ops.push_back(i);
            flipped = !flipped;
        }
    }
    
    cout << ops.size() << "\n";
    for (int i = 0; i < (int)ops.size(); i++) {
        cout << ops[i] << (i + 1 == (int)ops.size() ? "" : " ");
    }
    cout << "\n";
}




int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
