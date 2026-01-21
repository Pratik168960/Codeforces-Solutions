// Codeforces Problem 122A
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std ;
 
int main() {
    
    int n ;
    cin >> n ;
    
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777} ;
    
    bool possible = false ;
    
    for (int i = 0 ; i < 14 ; i++) {
        if (n % lucky_numbers[i] == 0) {
            possible = true ;
            break ;
        }
    }
    
    if (possible) {
        cout << "YES" << endl ;
    } else {
        cout << "NO" << endl ;
    }
    return 0 ;
}
