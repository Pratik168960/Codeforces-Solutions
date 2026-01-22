// Codeforces Problem 200B
// Status: Accepted
// Language: C++

#include<iostream>
using namespace std ; 
 
int main(){
    
    int n ; 
    cin >> n ; 
    
    int P ;
    double sum = 0 ; 
    for ( int i = 0 ; i < n ; i++ ){
        cin >> P ; 
        sum = sum + P ; 
    }
    
    double VolFrac = sum / n ; 
    cout << VolFrac << endl ; 
    
    
    return 0 ; 
}
