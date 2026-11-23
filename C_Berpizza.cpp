#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ms;

    int i = 1;
    while(cs--) {
        int type; cin >> type;

        if(type == 1) {
            int money; cin >> money;
            s.insert({i, money});
            ms.insert({money, -i});
            i++;
        }
        else if(type == 2) {
            cout << s.begin()->first << " ";
            ms.erase({s.begin()->second,-s.begin()->first});
            s.erase(s.begin());
        }
        else {
            cout << -ms.rbegin()->second << " ";
            s.erase({-ms.rbegin()->second, ms.rbegin()->first});
            ms.erase(--ms.end());
        }
    }
    cout << endl;

    return 0;
}