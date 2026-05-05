// Codeforces Problem 1367A
// Status: Accepted
// Language: C++ 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string b, a = "";
        cin >> b;
        a += b[0];
        for (int i = 1; i < b.size(); i += 2) {
            a += b[i];
        }
        cout << a << "\n";
    }
    return 0;
}
