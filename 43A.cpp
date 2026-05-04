// Codeforces Problem 43A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, c1 = 0, c2 = 0;
    cin >> n;
    string s, t1, t2;
    
    while (n--) {
        cin >> s;
        if (t1.empty() || t1 == s) {
            t1 = s;
            c1++;
        } else {
            t2 = s;
            c2++;
        }
    }
    
    cout << (c1 > c2 ? t1 : t2) << "\n";
    
    return 0;
}
