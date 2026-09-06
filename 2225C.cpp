// Codeforces Problem 2225C
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {

    
    int t;
    cin >> t ;
    
    
    while(t--){
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;
        
        int prev2 = 0;
        int prev1 = (row1[0] != row2[0] ? 1 : 0);
        

        for (int i = 1; i < n; i++) {
            int v_cost = (row1[i] != row2[i] ? 1 : 0);
            int h_cost = (row1[i - 1] != row1[i] ? 1 : 0) + (row2[i - 1] != row2[i] ? 1 : 0);
            
            int curr = min(prev1 + v_cost, prev2 + h_cost);
            
            
            prev2 = prev1;
            prev1 = curr;
        }
        
        cout << prev1 << "\n";
    }
    
    return 0;
}
