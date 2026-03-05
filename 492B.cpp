// Codeforces Problem 492B
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    int n, l;
    cin >> n >> l;
    
    vector<int> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end()); 
    
    int g = 0; 
    for (int i = 0; i < n - 1; i++) {
        g = max(g, a[i+1] - a[i]);
    }
    
    double d = g / 2.0;    
    double s = a[0];       
    double e = l - a[n-1]; 
    
    d = max(d, max(s, e));
    
    cout.precision(10);
    cout << fixed << d << "\n";
    
    return 0;
}
