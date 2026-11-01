// Problem: B. Did Not Go to Print
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/contest/2275/problem/B
// Solved: Stack, Array sort
/*
Recently, K1o0n bought himself a new expensive printer, which is distinguished by its memory, that is, it may not print immediately. Yesterday, while he was away from his new purchase, his friends used the printer.

There are n
 documents numbered from 1
 to n
. Initially, the printer memory is empty. The friends sequentially performed n
 commands on the printer, where the i
-th command can be one of:

'1'  — scanning. Document i
 is sent to the device memory and is placed on top of everything already there.
'2'  — printing from memory. If the memory is not empty, the device prints the topmost document in memory and removes it from there. Otherwise, the device prints document i
.
'3'  — quick print. The device prints document i
.
Today, the friends came to K1o0n with a complaint — not all documents were printed. Help K1o0n find the indices of all documents that were not printed.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of testcases.

The first line of each testcase contains an integer n
 (1≤n≤2⋅105
) — the number of documents.

The second line of each testcase contains a string s
 of length n
, consisting of the characters '1', '2' and '3' — the friends' commands.

It is guaranteed that the sum of n
 over all testcases does not exceed 2⋅105
.

Output
For each testcase, output two lines.

In the first line — the number k
 of documents that were not printed.

In the second line — their numbers in increasing order, separated by spaces. If k=0
, the second line is empty.

Example
InputCopy
6
2
12
2
13
2
23
6
112332
3
112
6
211213
OutputCopy
1
2 
1
1 
0

2
3 6 
2
1 3 
3
2 4 5 
Note
In the first testcase, the first document number 1
 is stored in memory, and then it is printed at the next step, so document number 2
 is not printed.

In the second testcase, document number 1
 is put into memory, but is never printed, because the next command prints document number 2
.

In the fifth testcase, the first document number 1
 is put into memory, then document number 2
 is put into memory, and by the third command we print the last document put into memory — document number 2
.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;

        stack<int> st;
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            char c; cin >> c;
            if(c == '2') {
                if(!st.empty()) {
                    st.pop();
                    ans.push_back(i);
                }
            }
            else if(c == '1') {
                st.push(i);
            }
        }

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(int x : ans) cout << x << " ";
        cout << endl;
    }

    

    return 0;
}