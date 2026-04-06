// Codeforces Problem 451A
// Status: Accepted
// Language: C++


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int k = min(n, m);
    
    if (k % 2 != 0) {
        cout << "Akshat\n";
    } else {
        cout << "Malvika\n";
    }
    
    return 0;
}  
