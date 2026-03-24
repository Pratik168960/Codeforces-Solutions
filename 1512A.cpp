// Codeforces Problem 1512A
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int c = (a[0] == a[1]) ? a[0] : a[2];
        
        for (int i = 0; i < n; i++) {
            if (a[i] != c) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}
