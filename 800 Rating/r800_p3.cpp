// Problem: Lucky?
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/contest/1676/problem/A

/*
A. Lucky?
time limit per test1 second
memory limit per test256 megabytes
A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

Input
The first line of the input contains an integer t
 (1≤t≤103
) — the number of testcases.

The description of each test consists of one line containing one string consisting of six digits.

Output
Output t
 lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
InputCopy
5
213132
973894
045207
000000
055776
OutputCopy
YES
NO
YES
YES
NO
Note
In the first test case, the sum of the first three digits is 2+1+3=6
 and the sum of the last three digits is 1+3+2=6
, they are equal so the answer is "YES".

In the second test case, the sum of the first three digits is 9+7+3=19
 and the sum of the last three digits is 8+9+4=21
, they are not equal so the answer is "NO".

In the third test case, the sum of the first three digits is 0+4+5=9
 and the sum of the last three digits is 2+0+7=9
, they are equal so the answer is "YES".
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking case
    int cs;
    cin >> cs;

    while(cs--) {
        string s;
        cin >> s;

        // for storeing sum
        int sum1 = 0;
        int sum2 = 0;

        // Getting 2 sum
        for(string::iterator it = s.begin(); it < s.end() - 3; it++) {
            sum1 += *it - '0';
        }
        for(string::iterator it = s.begin() + 3; it < s.end(); it++) {
            sum2 += *it - '0';
        }

        if(sum1 == sum2) cout << "YES" << endl;
        else cout << "NO" << endl; 

    // While ends
    }

    return 0;
}