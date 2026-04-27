// Codeforces Problem 1829A
// Status: Accepted
// Language: C++


#include<iostream>
using namespace std ; 
 
 
int main (){
    
    int t ; 
    cin >> t ; 
    string a = "codeforces" ; 
    
    while (t--){
        int count = 0 ; 
       string s ; 
       cin >> s ; 
       
       for ( int i = 0 ; i < 10 ; i++ ){
           if ( s[i] != a[i] ){
               count++ ; 
           }
       }
       
       cout << count << endl ; 
    }
    
    
    return 0 ; 
    
    
}
