// Problem: Borze
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/problemset/problem/32/B
// Solved: String, Loop, Condition
/*
B. Borze
time limit per test2 seconds
memory limit per test256 megabytes
Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

Examples
InputCopy
.-.--
OutputCopy
012
InputCopy
--.
OutputCopy
20
InputCopy
-..-.--
OutputCopy
1012
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string broze; cin >> broze;
    for(int i = 0; i < broze.size(); i++) {
        if(broze[i] == '.') cout << 0;
        else if(broze[i] == '-' && i+1 < broze.size()) {
            if(broze[i+1] == '.') {
                cout << 1;
                i++;
            }
        }
        if(broze[i] == '-' && i+1 < broze.size()) {
            if(broze[i+1] == '-') {
                cout << 2;
                i++;
            }
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    }

    return 0;
}
