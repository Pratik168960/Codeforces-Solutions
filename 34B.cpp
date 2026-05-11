// Codeforces Problem 34B
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, s = 0;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m && a[i] < 0; i++) {
        s -= a[i];
    }
    cout << s;
    return 0;
}
