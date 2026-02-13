// Codeforces Problem 580A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main() {
    int n ;
    cin >> n ;

    vector<int> a(n) ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
    }

    int curr_len = 1 ;
    int max_len = 1 ;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            curr_len++;
        } else {
            curr_len = 1;
        }
        max_len = max(max_len, curr_len);
    }

    cout << max_len << endl;

    return 0;
} 
