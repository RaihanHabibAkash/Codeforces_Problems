// Problem: Lucky Division
// Platform: Codeforces
// Rating: 1000
// Link: https://codeforces.com/contest/122/problem/A
// Solved: Vector, Loop, Condition

/*
A. Lucky Division
time limit per test2 seconds
memory limit per test256 megabytes
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
InputCopy
47
OutputCopy
YES
InputCopy
16
OutputCopy
YES
InputCopy
78
OutputCopy
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.
*/

#include <bits/stdc++.h>
using namespace std;

bool isLucky(int num) {
    while(num != 0) {
        int digit = num % 10;
        if(digit != 7 && digit != 4) return false;
        num /= 10;
    }
    return true;
}

int main() {
    int num; cin >> num;

    vector<int> v;

    for(int i = 1; i <= 1000; i++) if(isLucky(i)) v.push_back(i); 

    bool flag = false;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == num || num % v[i] == 0) {
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}