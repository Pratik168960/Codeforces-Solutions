// Codeforces Problem 520B
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std;

int main() {
    int n, m, c = 0;
    cin >> n >> m;
    while (m > n) {
        if (m % 2) m++;
        else m /= 2;
        c++;
    }
    cout << c + n - m;
    return 0;
}
