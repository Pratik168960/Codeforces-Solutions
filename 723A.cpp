// Codeforces Problem 723A
// Status: Accepted
// Language: C++   

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    
    int highest = max(x1, max(x2, x3));
    int lowest = min(x1, min(x2, x3));
    
    cout << highest - lowest << endl;
    
    return 0;
}
