// Codeforces Problem 2065A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;


int main() {

    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << s.substr(0, s.length() - 2) << "i" << "\n";
    }
    
    return 0;
}
