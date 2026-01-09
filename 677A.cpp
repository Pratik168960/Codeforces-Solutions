// Codeforces Problem 677A
// Status: Accepted
// Language: C++


#include <iostream>
using namespace std;
 
int main() {
    
    int n, h ; 
    cin >> n >> h ; 
 
    int width = 0 ; 
    for (int i = 0 ; i < n ; i++ ) {
        int a 
        cin >> a ;

      // If the friend's height is greater than fence height,
      // he needs width 2 (because he bends down)
        if (a > h)
            width += 2 ;
      // Otherwise, he fits normally and needs width 
        else
            width += 1 ;
    }
 
    cout << width << endl ;
    return 0;
}
