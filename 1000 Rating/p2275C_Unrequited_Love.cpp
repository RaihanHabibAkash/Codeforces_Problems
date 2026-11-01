// Problem: C. Unrequited Love
// Platform: Codeforces
// Rating: 1000
// Link: https://codeforces.com/contest/2275/problem/C
// Solved: Logic have understand from Youtube
/*
K1o0n reached the stage where, for complete happiness, he only lacked a musical instrument, and bought a synthesizer second-hand. The instrument has n
 keys, giving a1,a2,…,an
 units of audience love.

Playing one note at a time is boring, so K1o0n learned a single technique — a triad: three keys with one key between each pair, pressed simultaneously. A triad starting at x
 (1≤x≤n−4
) is the keys x
, x+2
, and x+4
, which brings ax+ax+2−ax+4
 units of audience love.

The keys are old, and each can withstand exactly one press. Therefore, K1o0n wants to choose exactly two different triads that do not share any keys. In addition, he wants both triads to bring the same amount of audience love.

Count the number of ways to choose two such triads.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of testcases.

The first line of each testcase contains an integer n
 (6≤n≤2⋅105
) — the number of keys.

The second line of each testcase contains n
 integers ai
 (−104≤ai≤104
) — the units of audience love.

It is guaranteed that the sum of n
 over all testcases does not exceed 2⋅105
.

Output
For each testcase, output one integer — the number of unordered pairs of disjoint triads with equal audience love values.

Note that the answer may not fit into a 32-bit type. Use a 64-bit type (long long in C++, long in Java).

Example
InputCopy
3
6
5 1 4 2 2 -4
7
0 0 0 0 0 0 0
12
-4 3 0 -4 -4 -1 -4 1 -3 -2 -2 -1
OutputCopy
1
2
5
Note
In the first testcase, such a pair is unique: x=1
, y=2
: 5+4−2=1+2−(−4)
.

In the second testcase, there are two such pairs: x=1
, y=2
 and x=3
, y=2
, and each triad brings 0
 units of audience love.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        vector<ll> v;
        for(int i = 0; i < n; i++) {
            ll val; cin >> val;
            v.push_back(val);
        }

        map<ll, ll> freq;
        vector<ll> loves;
        for(int i = 0; (i+4) < v.size(); i++) {
            ll triad = v[i] + v[i+2] - v[i+4];
            loves.push_back(triad);
            freq[triad]++;
        }

        ll cnt = 0;
        for(auto x : freq) {
            ll f = x.second;
            if(f >= 2) cnt += f * (f-1) / 2;
        }

        for(int i = 0; i < loves.size(); i++) {
            if(i + 2 < loves.size() && loves[i] == loves[i+2]) cnt--;
            if(i + 4 < loves.size() && loves[i] == loves[i+4]) cnt--;
        }

        cout << cnt << endl;
    }

    return 0;
}