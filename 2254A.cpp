// Codeforces Problem 2254A
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    vector<int> tokens(3);
    cin >> tokens[0] >> tokens[1] >> tokens[2];
    
    int rounds = 0;
    
    while (tokens[0] != tokens[1] && tokens[1] != tokens[2] && tokens[0] != tokens[2]) {
        sort(tokens.begin(), tokens.end());
        
        tokens[2]--; 
        tokens[0]++; 
        
        rounds++;
    }
    
    cout << rounds << "\n";
}

int main() {

    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
