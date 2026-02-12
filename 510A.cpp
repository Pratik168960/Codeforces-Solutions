// Codeforces Problem 510A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <string>
using namespace std ;

int main() {

    int n, m ;
    if (cin >> n >> m) {
        for (int row = 1; row <= n; row++) {
            if (row % 2 != 0) {
                for (int col = 0; col < m; col++) {
                    cout << "#";
                }
            } 
            else {

                if (row % 4 == 2) {
                    for (int col = 0; col < m - 1; col++) cout << ".";
                    cout << "#";
                } 

                else {
                    cout << "#";
                    for (int col = 0; col < m - 1; col++) cout << ".";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
