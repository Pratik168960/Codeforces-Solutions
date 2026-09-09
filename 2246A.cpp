// Codeforces Problem 2246A
// Status: Accepted
// Language: C++ 

#include <iostream>

using namespace std;

int main() {

    
    int t ;
    cin >>t ;
    
    while(t--){
        int n;
        cin >> n;
            
        for (int i = 1; i <= n; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout <<endl;
    }
    
    
    return 0;
}
