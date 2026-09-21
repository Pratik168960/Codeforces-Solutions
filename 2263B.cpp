// Codeforces Problem 2263B
// Status: Accepted
// Language: C++


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (k < n || k >= 2 * n) {
            cout << "-1\n";
            continue;
        }
        
        int c = 2 * n - k;
        vector<vector<int>> a(n, vector<int>(n, 0));
        int v = 1;
        
        for (int i = 0; i < c - 1; i++) {
            a[i][i] = v++;
        }
        
        for (int i = c - 1; i < n; i++) {
            if ((i - c + 1) % 2 == 0) {
                for (int j = c - 1; j < n; j++) a[i][j] = v++;
            } else {
                for (int j = n - 1; j >= c - 1; j--) a[i][j] = v++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 0) a[i][j] = v++;
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
