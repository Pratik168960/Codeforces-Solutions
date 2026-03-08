// Codeforces Problem 381A
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std;

int main() {
    int n, a[1005], p[2] = {0};
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int l = 0, r = n - 1, t = 0;
    
    while(l <= r) {
        if(a[l] > a[r]) {
            p[t % 2] += a[l++];
        } else {
            p[t % 2] += a[r--];
        }
        t++;
    }
    
    cout << p[0] << " " << p[1];
    return 0;
}
