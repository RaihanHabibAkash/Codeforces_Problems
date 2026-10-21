// Problem: A. IQ test
// Platform: Codeforces
// Rating: 1300
// Link: https://codeforces.com/contest/25/problem/A
// Solved: Ovservation
/*
Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

Examples
InputCopy
5
2 4 7 8 10
OutputCopy
3
InputCopy
4
1 2 1 1
OutputCopy
2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int n; cin >> n;
    int arr[n];
    int cnt_evns = 0, cnt_odds = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2) cnt_odds++;
        else cnt_evns++;
    }

    for(int i = 0; i < n; i++) {
        if(cnt_evns < cnt_odds)
            if(arr[i] % 2 == 0)
                cout << i+1 << " ";
        if(cnt_evns > cnt_odds)
            if(arr[i] % 2)
                cout << i + 1 << " ";
    }
    cout << endl;

    return 0;
}