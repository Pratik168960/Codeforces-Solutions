// Codeforces Problem 1915A
// Status: Accepted
// Language: C++

#include <iostream>

int main() {
    int t, a, b, c;
    std::cin >> t;
    while (t--) {
        std::cin >> a >> b >> c;
        std::cout << (a ^ b ^ c) << '\n';
    }
    return 0;
}
