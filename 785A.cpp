// Codeforces Problem 785A
// Status: Accepted
// Language: C++ 

#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n ; 

    int totalFaces = 0;
    string s;

    while (n--) {
        cin >> s ;

        if (s == "Tetrahedron") {
            totalFaces += 4 ;
        } else if (s == "Cube") {
            totalFaces += 6 ; 
        } else if (s == "Octahedron") {
            totalFaces += 8 ;
        } else if (s == "Dodecahedron") {
            totalFaces += 12 ;
        } else if (s == "Icosahedron") {
            totalFaces += 20 ;
        }
    }

    cout << totalFaces << endl;

    return 0;
}
