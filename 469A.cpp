// Codeforces Problem 469A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <vector>
#include <set>
using namespace std ;

int main() {
    int n, p, q, lvl ;
    cin >> n ;

    set<int> passed_lvl ;
    cin >> p ;
    
    for (int i = 0; i < p; i++) {
        cin >> lvl ;
        passed_lvl.insert(lvl) ;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> lvl ;
        passed_lvl.insert(lvl) ;
    }

    if (passed_lvl.size() == n) {
        cout << "I become the guy." << endl ;
    } else {
        cout << "Oh, my keyboard!" << endl ;
    }

    return 0 ;
}
