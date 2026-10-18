// https://codeforces.com/problemset/problem/44/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int cs; cin >> cs;
    map<pair<string,string>, int> mp;
    while(cs--) {
        string s1, s2; cin >> s1 >> s2;
        mp[{s1, s2}]++;
    }

    int cnt = 0;
    for(auto x : mp) cnt++;
    cout << cnt << endl;
    
    return 0;
}