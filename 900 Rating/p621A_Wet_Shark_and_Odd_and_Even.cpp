// Problem: A. Wet Shark and Odd and Even
// Platform: Codeforces
// Rating: 900
// Link: https://codeforces.com/contest/621/problem/A
// Solved: Loop, Array, (Even-Odd Logic)
/*
Today, Wet Shark is given n integers. Using any of these integers no more than once, Wet Shark wants to get maximum possible even (divisible by 2) sum. Please, calculate this value for Wet Shark.

Note, that if Wet Shark uses no integers from the n integers, the sum is an even integer 0.

Input
The first line of the input contains one integer, n (1 ≤ n ≤ 100 000). The next line contains n space separated integers given to Wet Shark. Each of these integers is in range from 1 to 109, inclusive.

Output
Print the maximum possible even sum that can be obtained if we use some of the given integers.

Examples
InputCopy
3
1 2 3
OutputCopy
6
InputCopy
5
999999999 999999999 999999999 999999999 999999999
OutputCopy
3999999996
Note
In the first sample, we can simply take all three integers for a total sum of 6.

In the second sample Wet Shark should take any four out of five integers 999 999 999.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n; cin >> n;
    int arr[n];
    
    ll mx = 0; int odd = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mx += arr[i];

        if(arr[i] % 2)
            if(!odd || arr[i] < odd)
                odd = arr[i];
    }

    if(mx % 2 == 0) cout << mx << endl;
    else cout << mx - odd << endl;

    return 0;
}