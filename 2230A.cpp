// Codeforces Problem 2230A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    long long t, n, a, b;
    cin >> t;
    
    while (t--) {
        cin >> n >> a >> b;
        cout << (n / 3) * min(3 * a, b) + min((n % 3) * a, b) << "\n";
    }
    
    return 0;
}
