// Problem: C. Numeric String Template
// Platform: Codeforces
// Rating: 1000
// Link: https://codeforces.com/contest/2000/problem/C
// Solved: 2 Map
/*
Kristina has an array a
, called a template, consisting of n
 integers. She also has m
 strings, each consisting only of lowercase Latin letters. The strings are numbered from 1
 to m
. She wants to check which strings match the template.

A string s
 is considered to match the template if all of the following conditions are simultaneously satisfied:

The length of the string s
 is equal to the number of elements in the array a
.
The same numbers from a
 correspond to the same symbols from s
. So, if ai=aj
, then si=sj
 for (1≤i,j≤n
).
The same symbols from s
 correspond to the same numbers from a
. So, if si=sj
, then ai=aj
 for (1≤i,j≤n
).
In other words, there must be a one-to-one correspondence between the characters of the string and the elements of the array.
For example, if a
 = [3,5,2,1,3
], then the string "abfda" matches the template, while the string "afbfa" does not, since the character "f" corresponds to both numbers 1
 and 5
.

Input
The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The following descriptions are for the test cases.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the number of elements in the array a
.

The second line of each test case contains exactly n
 integers ai
 (−109≤ai≤109
) — the elements of the array a
.

The third line of each test case contains a single integer m
 (1≤m≤2⋅105
) — the number of strings to check for template matching.

Following are m
 strings, each containing a non-empty string sj
 (1≤|sj|≤2⋅105
), consisting of lowercase Latin letters.

It is guaranteed that the sum of n
 across all test cases does not exceed 2⋅105
, and that the sum of the lengths of all strings does not exceed 2⋅105
.

Output
For each test case, output m
 lines. On the i
-th line (1≤i≤m
) output:

"YES", if the string with index i
 matches the template;
"NO" otherwise.
You may output the answer in any case (for example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as a positive answer).

Example
InputCopy
3
5
3 5 2 1 3
2
abfda
afbfa
2
1 2
3
ab
abc
aa
4
5 -3 5 -3
4
aaaa
bcbc
aba
cbcb
OutputCopy
YES
NO
YES
NO
NO
NO
YES
NO
YES
Note
The first test case is explained in the problem statement.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int times; cin >> times;
        while(times--) {
            string s; cin >> s;
            map<char, int> mp1;
            map<int, char> mp2;

            if(s.size() != n) {
                cout << "NO" << endl;
                continue;
            }

            bool flag = true;
            for(int i = 0; i < n; i++) {
                if(mp1.find(s[i]) == mp1.end() && mp2.find(arr[i]) == mp2.end()) {
                    mp1[s[i]] = arr[i];
                    mp2[arr[i]] = s[i];
                }
                else if (mp1.find(s[i]) == mp1.end() || mp2.find(arr[i]) == mp2.end()){
                    flag = false;
                    break;
                }
                else if(mp1[s[i]] != arr[i] || mp2[arr[i]] != s[i]) {
                    flag = false;
                    break;
                }
            }

            cout << (flag ? "YES" : "NO") << endl;
        }
    }

    return 0;
}