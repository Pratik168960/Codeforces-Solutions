// Codeforces Problem 271A 
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std ;
 
bool distinctDigits(int year) {
    int freq[10] = {0} ;
 
    while (year > 0) {
        int digit = year % 10 ;
        
        if (freq[digit] > 0)
            return false ;
            
        freq[digit]++ ;
        year /= 10 ;
    }
    return true ;
}
 
int main() {
    int y ;
    cin >> y ;
 
    for (int year = y + 1 ; ; year++) {
        if (distinctDigits(year)) {
            cout << year << endl ;
            break ;
        }
    }
 
    return 0 ;
}
