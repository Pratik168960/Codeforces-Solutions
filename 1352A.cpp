// Codeforces Problem 1352A
// Status: Accepted
// Language: C++  

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ;
        vector<int> v ;
        int p = 1 ;
        
        
        while (n > 0) {
            int d = n % 10 ;
            if (d > 0) {
                v.push_back(d * p) ;
            }
            n /= 10 ;
            p *= 10 ;
        }
        
        cout << v.size() << endl ;
        
        for (int x : v) {
            cout << x << " " ;
        }
        cout << endl ;
    }
    return 0;
} 
