// Codeforces Problem 1985A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << "\n";
    }
    return 0;
}
