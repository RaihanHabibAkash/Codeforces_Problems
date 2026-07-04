// Problem: Beautiful Year
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/problemset/problem/271/A
// Solved: Loop, Condition
/*
A. Beautiful Year
time limit per test2 seconds
memory limit per test256 megabytes
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples
InputCopy
1987
OutputCopy
2013
InputCopy
2013
OutputCopy
2014
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int num; cin >> num;

    // Condition
    num++;
    while(true) {
        int a = num % 10;
        int b = (num/10)%10;
        int c = (num/100)%10;
        int d = (num/1000)%10;

        // Checking
        if(a != b && a != c && a != d && b != c && b != d && c != d) break;
        else ++num;
    }

    // Printing
    cout << num << endl;

    return 0;
}