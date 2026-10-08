// Problem: A. Good Contest
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/contest/2266/problem/A
// Solved: Max and array logic
/*
The next programming contest has three problems and n
 participants.

Problem 1
 is easy, problem 2
 is medium, and problem 3
 is hard.

A participant is called weak if they did not solve all three problems.

Unfortunately, the scoreboard was lost. The only remaining information is an array a
 of length 3
, where ai
 is the number of participants who solved problem i
.

Among all scoreboards consistent with this information, find the minimum possible number of weak participants.

Input
The first line contains an integer t
 (1≤t≤3000
) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤9
) — the number of participants.

The second line of each test case contains three integers a1,a2,a3
 (0≤ai≤n
), where ai
 is the number of participants who solved problem i
.

Output
For each test case, print a single integer — the minimum possible number of weak participants.

Example
InputCopy
6
3
3 3 3
4
4 4 3
1
1 1 1
9
9 8 9
5
0 5 5
6
4 3 2
OutputCopy
0
1
0
1
5
4
Note
In the first test case, all 3
 participants can have solved all three problems, so the answer is 0
.

In the second test case, participant 1
 could have solved only problems 1
 and 2
, while participants 2
, 3
, and 4
 solved all three problems. Therefore, participant 1
 is the only participant who is weak, so the answer is 1
. It can be shown that this is minimal.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int cs; cin >> cs;
    while(cs--) {
        int arr[3];
        int students, mn = 0; cin >> students;

        for(int i = 0; i < 3; i++) {
            cin >> arr[i];
            mn = max(mn, students - arr[i]);
        }

        cout << mn << endl;
    }

    return 0;
}