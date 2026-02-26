// Codeforces Problem 1703A
// Status: Accepted
// Language: C++   

#include<iostream>
#include<string>
using namespace std ; 

int main (){
    
    int t ; 
    cin >> t ; 


    while (t--){
        
        string s ; 
        cin >> s ; 
        
        s[0] = tolower(s[0]);
        s[1] = tolower(s[1]) ; 
        s[2] = tolower(s[2]) ; 
        
        
        if ( s == "yes" ){
            cout << "YES" << endl ;
        }else {
            cout << "NO" << endl ; 
        }
        
    }
    
    
    return 0 ; 
}
