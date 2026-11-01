// Problem: A. In Search of Convenience
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/contest/2275/problem/A
// Solved: Math radius logic
/*
K1o0n got a router and placed it at point (x0,y0)
; we will consider the apartment layout as a coordinate plane, and the floor is tiled, so the furniture can stand only at lattice points with integer coordinates.

The internet spreads exactly R
 meters around the router. K1o0n wants to move his computer as far away from it as possible — but still so that the internet is available. Therefore, the desk with the computer must be placed exactly on the reception boundary, at a distance of R
 from the router. For example, if the router is at point (5,5)
 and R=5
, then the desk can be placed at point (2,1)
, because (5−2)2+(5−1)2=52
.

Find any point with integer coordinates that is exactly R
 away from (x0,y0)
.

Recall that the distance from the point (x0,y0)
 to the point (x,y)
 is (x0−x)2+(y0−y)2−−−−−−−−−−−−−−−−−√
.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of testcases.

The only line of each testcase contains three integers x0
, y0
, and R
 (−10≤x0,y0≤10
, 1≤R≤25
) — the coordinates of the router and the coverage radius.

Output
For each testcase, output two integers x
 and y
 — the coordinates of the desk.

If there are several suitable points, output any of them.

Example
InputCopy
3
0 0 1
5 5 5
10 10 13
OutputCopy
0 1
2 1
-2 5
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cs; cin >> cs;
    while(cs--) {
        int x, y, val; cin >> x >> y >> val;

        cout << x + val << " " << y << endl;
    }    

    return 0;
}