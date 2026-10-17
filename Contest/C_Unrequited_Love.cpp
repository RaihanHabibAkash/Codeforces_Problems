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