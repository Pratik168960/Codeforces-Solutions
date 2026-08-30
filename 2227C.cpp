// Codeforces Problem 2227C
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> B, T, N, H;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        if (x % 6 == 0) {
            B.push_back(x);
        } else if (x % 2 == 0) {
            T.push_back(x);
        } else if (x % 3 == 0) {
            H.push_back(x);
        } else {
            N.push_back(x);
        }
    }
    

    for (int x : B) cout << x << " ";
    for (int x : T) cout << x << " ";
    for (int x : N) cout << x << " ";
    for (int x : H) cout << x << " ";
    cout << "\n";
    
}

int main() {
    
    
    int t;
    
    cin >> t ;
    
    while(t--){
        solve();
    }
    
    return 0;
}
