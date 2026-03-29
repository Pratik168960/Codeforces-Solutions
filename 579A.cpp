
// Codeforces Problem 579A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int x, c = 0;
    cin >> x;
    
    while (x) {
        c += x % 2;
        x /= 2;
    }
    
    cout << c;
    return 0;
}
