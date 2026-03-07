// Codeforces Problem 732A
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    
    for (int i = 1; i <= 10; i++) {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
            cout << i << "\n";
            return 0;
        }
    }
    
    return 0;
}
