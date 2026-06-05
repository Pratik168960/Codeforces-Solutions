// Codeforces Problem 1883B
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int t; 
    cin >> t;
    while (t--) {
        int n, k, o = 0; 
        string s; 
        cin >> n >> k >> s;
        
        int c[26] = {0};
        for (char x : s) c[x - 'a']++;
        for (int i : c) o += i % 2;
        
        cout << (o <= k + 1 ? "YES\n" : "NO\n");
    }
    return 0;
}
