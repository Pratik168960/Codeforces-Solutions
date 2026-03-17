// Codeforces Problem 1999A
// Status: Accepted
// Language: C++

#include<iostream>
using namespace std ; 

int main (){
    
    int t ;
    cin >> t ;
    
    while (t--){
        int n ; 
        cin >> n ; 
        cout << ( n / 10 ) + ( n % 10 ) << endl ; 
    }
    
    return 0 ; 
}
