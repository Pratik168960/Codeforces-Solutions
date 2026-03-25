// Codeforces Problem 1760A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        cout << v[1] << "\n";
    }
    return 0;
}
