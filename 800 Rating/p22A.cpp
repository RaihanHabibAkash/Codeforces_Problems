// Problem: Second Order Statistics
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/contest/22/problem/A
// Solved: STL Set
/*
A. Second Order Statistics
time limit per test2 seconds
memory limit per test256 megabytes
Once Bob needed to find the second order statistics of a sequence of integer numbers. Lets choose each number from the sequence exactly once and sort them. The value on the second position is the second order statistics of the given sequence. In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.

Input
The first input line contains integer n (1 ≤ n ≤ 100) — amount of numbers in the sequence. The second line contains n space-separated integer numbers — elements of the sequence. These numbers don't exceed 100 in absolute value.

Output
If the given sequence has the second order statistics, output this order statistics, otherwise output NO.

Examples
InputCopy
4
1 2 2 -4
OutputCopy
1
InputCopy
5
1 2 3 1 1
OutputCopy
2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int times; cin >> times;
    set<int> st;

    while(times--) {
        int val; cin >> val;
        st.insert(val);
    }

    auto it = st.begin(); it++;
    if(it == st.end()) cout << "NO" << endl;
    else cout << *it << endl;

    return 0;
}