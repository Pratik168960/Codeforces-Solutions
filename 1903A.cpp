// Codeforces Problem 1903A
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main() {
    
    int t ;
    cin >> t ;

    while (t--) {
        int n, k ;
        cin >> n >> k ;

        vector<int> arr(n) ;
        
        for (int &x : arr) {
            cin >> x ;
        }

        if (k >= 2) {
            cout << "YES" << endl ;
        } 
        else {
            
            bool isSorted = true ;
            for (int i = 0 ; i < n - 1 ; i++) {
                if (arr[i] > arr[i + 1]) {
                    isSorted = false ;
                    break ;
                }
            }
            

            if (isSorted) {
                cout << "YES" << endl ;  
            } else {
                cout << "NO" << endl ;
            }
        }
    }
    return 0 ;
}
