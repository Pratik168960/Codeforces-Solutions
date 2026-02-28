// Codeforces Problem 337A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main() {
    
    
    int n, m ;
    cin >> n >> m ;



    vector<int> a(m) ;
    for (int i = 0 ; i < m ; i++) {
        cin >> a[i] ;
    }



    sort(a.begin(), a.end()) ;



    int d = 1000;
    for (int i = 0 ; i <= m - n ; i++) {
        if (a[i + n - 1] - a[i] < d) {
            d = a[i + n - 1] - a[i] ;
        }
    }

   
   
    cout << d << endl ;




    return 0 ;
}
