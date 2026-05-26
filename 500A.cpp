// Codeforces Problem 500A
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<int> a(n);
    
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
    
    int c = 1;
    while (c < t) {
        c += a[c];
    }
    
    cout << (c == t ? "YES" : "NO");
    return 0;
}
