// Codeforces Problem 431A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    
    string s;
    cin >> s;
    
    int r = 0;
    for (char c : s) {
        r += a[c - '1'];
    }
    
    cout << r << '\n';
    return 0;
}
