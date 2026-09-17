// Problem: A. Game 23
// Platform: Codeforces
// Rating: 1000
// Link: https://codeforces.com/contest/1141/problem/A
// Solved: Recurtion
/*
A. Game 23
time limit per test1 second
memory limit per test256 megabytes
Polycarp plays "Game 23". Initially he has a number n
 and his goal is to transform it to m
. In one move, he can multiply n
 by 2
 or multiply n
 by 3
. He can perform any number of moves.

Print the number of moves needed to transform n
 to m
. Print -1 if it is impossible to do so.

It is easy to prove that any way to transform n
 to m
 contains the same number of moves (i.e. number of moves doesn't depend on the way of transformation).

Input
The only line of the input contains two integers n
 and m
 (1≤n≤m≤5⋅108
).

Output
Print the number of moves to transform n
 to m
, or -1 if there is no solution.

Examples
InputCopy
120 51840
OutputCopy
7
InputCopy
42 42
OutputCopy
0
InputCopy
48 72
OutputCopy
-1
Note
In the first example, the possible sequence of moves is: 120→240→720→1440→4320→12960→25920→51840.
 The are 7
 steps in total.

In the second example, no moves are needed. Thus, the answer is 0
.

In the third example, it is impossible to transform 48
 to 72
*/
#include <bits/stdc++.h>
using namespace std;

int game(int a, int b) {
    if(a == b) return 0;
    else if(a > b) return -1;

    int option1 = game(a*3, b),
        option2 = game(a*2, b);

    if(option1 == -1 && option2 == -1) return -1;

    int mn = min(option1, option2);

    if(mn == -1) return max(option1, option2) + 1;
    else return mn + 1;
}

int main() {
    int a, b; cin >> a >> b;

    cout << game(a, b) << endl;

    return 0;
}