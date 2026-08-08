// Codeforces Problem 379A
// Status: Accepted
// Language: C++

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int hours = a;
    
    while (a >= b) {
        hours += (a / b);
        a = (a / b) + (a % b);
    }
    
    cout << hours << "\n";
    
    return 0;
}
