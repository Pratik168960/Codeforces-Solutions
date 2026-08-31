// Codeforces Problem 2229A
// Status: Accepted
// Language: C++


#include <iostream>
#include <algorithm>

using namespace std;


    

int main() {

    
    int t;
    cin >> t ;
    
    while(t--){
        int n;
        cin >> n;
        
        int min_val = 1005;
        int max_val = -1;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            min_val = min(min_val, a);
            max_val = max(max_val, a);
        }
        
        cout << (max_val - min_val + 1) / 2 << endl;
        
    }
    
    return 0;
}
