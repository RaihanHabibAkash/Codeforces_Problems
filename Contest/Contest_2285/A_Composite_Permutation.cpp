// https://codeforces.com/contest/2285/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;

        if(n <= 3) {
            cout << -1 << endl;
            continue;
        }

        cout << "4 2 3 1 ";
        for(int i = 5; i <= n; i++) cout << i << " ";
        cout << endl;
    }

    return 0;
}