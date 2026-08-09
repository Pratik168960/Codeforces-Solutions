// Codeforces Problem 731A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    string s;
    if (cin >> s) {
        int total_rotations = 0;
        char current = 'a';
        
        for (char target : s) {
            int diff = abs(current - target);
            
            total_rotations += min(diff, 26 - diff);
            
            current = target;
        }
        
        cout << total_rotations << "\n";
    }
    
    return 0;
}
