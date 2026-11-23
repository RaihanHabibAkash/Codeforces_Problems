// https://codeforces.com/problemset/problem/2000/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++) {
            int val; cin >> val;
            mp[val].push_back(i);
        }

        int times; cin >> times;
        while(times--) {
            string s; cin >> s;
            map<char, vector<int>> string_indexs;

            if(s.size() != n) {
                cout << "NO" << endl;
                continue;
            }

            for(int i = 0; i < n; i++)
                string_indexs[s[i]].push_back(i);


            bool flag = true;
            auto it = string_indexs.begin();
            auto it2 = mp.begin();
            while(it != string_indexs.end() && it2 != mp.end()) {
                vector<int> mp_index = it2->second;
                vector<int> s_index = it->second;

                if(mp_index.size() != s_index.size()) {
                    flag = false;
                    break;
                }

                for(int i = 0; i < mp_index.size(); i++) {
                    if(mp_index[i] != s_index[i]) {
                        flag = false;
                        break;
                    }
                }

                it++;
                it2++;
            }

            if(!flag || it != string_indexs.end() || it2 != mp.end()) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }

    return 0;
}
