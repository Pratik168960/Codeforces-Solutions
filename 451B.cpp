// Codeforces Problem 451B
// Status: Accepted
// Language: C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> sorted_a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted_a[i] = a[i]; 
    }
    
    sort(sorted_a.begin(), sorted_a.end());
    
    int L = 0, R = n - 1;
    
    while (L < n && a[L] == sorted_a[L]) {
        L++;
    }
    
    while (R >= 0 && a[R] == sorted_a[R]) {
        R--;
    }
    
    if (L >= R) {
        cout << "yes\n1 1\n";
        return 0;
    }
    
    reverse(a.begin() + L, a.begin() + R + 1);
    
    bool is_possible = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted_a[i]) {
            is_possible = false;
            break;
        }
    }
    
    if (is_possible) {
        cout << "yes\n" << L + 1 << " " << R + 1 << "\n";
    } else {
        cout << "no\n";
    }
    
    return 0;
}
