// Codeforces Problem 1859A
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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        if (a[0] == a.back()) {
            cout << -1 << "\n";
        } else {
            int k = 0;
            while (a[k] == a[0]) k++;

            cout << k << " " << n - k << "\n";

            for (int i = 0; i < k; i++) cout << a[i] << " ";
            cout << "\n";

            for (int i = k; i < n; i++) cout << a[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}
