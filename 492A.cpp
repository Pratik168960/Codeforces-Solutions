// Codeforces Problem 492A
// Status: Accepted
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, s = 1;
    cin >> n;
    while (n >= s) {
        n -= s;
        i++;
        s += i;
    }
    cout << i - 1;
    return 0;
}
