// Codeforces Problem 313A
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a = n / 10;
    int b = (n / 100) * 10 + n % 10;
    
    cout << max({n, a, b});
    
    return 0;
}
