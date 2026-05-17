// Codeforces Problem 1900A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;

int main() {

    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int c = 0;
        for (char x : s) {
            if (x == '.') c++;
        }
        
        if (s.find("...") != string::npos) {
            cout << 2 << "\n";
        } else {
            cout << c << "\n";
        }
    }
    return 0;
}
