// Codeforces Problem 474A
// Status: Accepted
// Language: C++


#include <iostream>
#include <string>

using namespace std;

int main() {
    string kbd = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    string s;
    
    cin >> dir >> s;
    

    int offset = (dir == 'R') ? -1 : 1;
    
    for (char c : s) {
        int pos = kbd.find(c);
        cout << kbd[pos + offset];
    }
    
    cout << endl;
    return 0;
}
