// https://codeforces.com/contest/2275/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        
        vector<int> ar(n);
        
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll m = n - 4;
        map<int, ll> mp;
        for(int i = 0; i < m; i++)
        {
            int val = ar[i] + ar[i+2] - ar[i+4];
            mp[val]++;
        }

        ll ans = 0;
        for(auto [val, c] : mp)
        {
            ans += c * (c - 1) / 2;
        }

        for(int i = 0; i + 2 < m; i++)
        {
            ll val_x = ar[i] + ar[i+2] - ar[i+4];
            ll val_y = ar[i + 2] + ar[i + 4] - ar[i + 6];

            if(val_x == val_y)
                ans--;
        }

        for(int i = 0; i + 4 < m; i++)
        {
            ll val_x = ar[i] + ar[i+2] - ar[i+4];
            ll val_y = ar[i + 4] + ar[i + 6] - ar[i + 8];

            if(val_x == val_y)
                ans--;
        }

        cout << ans << '\n';
    }

    return 0;
}