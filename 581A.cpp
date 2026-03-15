// Codeforces Problem 581A
// Status: Accepted
// Language: C++

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int d = min(a, b);
    int s = abs(a - b) / 2;
    
    cout << d << " " << s << "\n";
    
    return 0;
}
