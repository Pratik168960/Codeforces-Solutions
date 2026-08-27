// Codeforces Problem 2226A
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    long long total_cost = 0;
    int last_greater_than_one = -1;
    

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] >= 2) {
            total_cost += a[i];
            last_greater_than_one = i;
        }
    }
    


    for (int i = last_greater_than_one + 1; i < n; ++i) {
        if (a[i] == 1) {
            total_cost += 1;
            break; 
            
        }
    }
    


    cout << total_cost % 676767677 << "\n";
    
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
