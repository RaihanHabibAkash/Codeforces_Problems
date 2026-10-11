#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;

    for(int i = 1; i < n; i+=2) {
        swap(s1[i], s2[i-1]);
        swap(s2[i], s1[i-1]);
    }

    int one1 = 0, one2 = 0;
    for(int i = 0; i < n; i++) {
        if(s1[i] == '1') one1++;
        if(s2[i] == '1') one2++;
    }

    if(one1 != one2) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}