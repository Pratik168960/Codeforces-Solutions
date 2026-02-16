// Codeforces Problem 25A
// Status: Accepted
// Language: C++ 

#include <iostream>
using namespace std;

int main() {
    int n, x ;
    cin >> n ;
    
    int e = 0, o = 0 ;
    int ie = 0, io = 0 ;

    for (int i = 1 ; i <= n ; i++) {
        cin >> x ;
        if (x % 2 == 0) {
            e++ ;
            ie = i ;
        } else {
            o++ ;
            io = i ;
        }
    }

    cout << (e == 1 ? ie : io) << endl;

    return 0;
}
