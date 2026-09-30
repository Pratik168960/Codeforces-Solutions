// Codeforces Problem 2269A
// Status: Accepted
// Language: C++


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {

        long long n, k;
        cin >> n >> k;


        long long ans = (k - 1) * 2LL + (1LL << (n - k + 1));

        
        cout << ans << "\n";
    }
    
    return 0;
}
