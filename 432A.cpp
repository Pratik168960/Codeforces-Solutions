// Codeforces Problem 432A
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

int main() {
    int n, k, y, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> y;
        if (y + k <= 5) {
            c++;
        }
    }
    cout << c / 3 << "\n";
    return 0;
}
