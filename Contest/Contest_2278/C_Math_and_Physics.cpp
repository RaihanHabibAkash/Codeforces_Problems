#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        int arr[n];
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        bool mid = false;
        for(int i = 1; i < n-1; i++)
            if(arr[i] >= 2)
                mid = true;
        if(mid) {
            cout << sum-1 << endl;
            continue;
        }

        if(arr[0] >= 2 || arr[n-1] >= 2) cout << sum - (n-1) << endl;
        else cout << -1 << endl;
    }

    return 0;
}