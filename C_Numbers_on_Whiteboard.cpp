// https://codeforces.com/problemset/problem/1430/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        stack<int> odd, even;

        for(int i = 1; i <= n; i++) {
            if(i % 2) odd.push(i);
            else even.push(i);
        }

        if(odd.top() > even.top())
            bool flag = true;
        e
        while(!odd.empty() && !even.top())
    }

    return 0;
}