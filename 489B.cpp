// Codeforces Problem 489B
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int pairs = 0;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) {
            pairs++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    cout << pairs << endl;
    return 0;
}
