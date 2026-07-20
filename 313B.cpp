// Codeforces Problem 313B
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
using namespace std;

int p[100005];

int main() {
    
    string s;
    cin >> s;
    
    for(int i=1; i<s.size(); ++i) {
        p[i+1] = p[i] + (s[i] == s[i-1]);
    }
    
    int m, l, r;
    cin >> m;
    
    while(m--) {
        cin >> l >> r;
        cout << p[r] - p[l] << "\n";
    }
}
