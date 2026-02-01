// Codeforces Problem 520A
// Status: Accepted
// Language: C++

#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std ;

int main() {
    
    int n ;
    string s ;
    cin >> n >> s ;


    set<char> letters ;
    for (char c : s) {
        letters.insert(tolower(c)) ;
    }


    if (letters.size() == 26) {
        cout << "YES" << endl ;
    } else {
        cout << "NO" << endl ;
    }

    return 0 ;
}
