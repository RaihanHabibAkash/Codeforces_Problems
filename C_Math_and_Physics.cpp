// https://codeforces.com/contest/2278/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        stack<int> st;
        int one; cin >> one;
        st.push(one);

        int hand = 0;
        for(int i = 1; i < n; i++) {
            int val; cin >> val;
            val += hand;

            if(val >= 2) {
                st.top() += val - 1;
                hand = 1;
            }
            else {
                st.push(val);
                hand = 0;
            }
        }

        if(st.size() == 1) cout << st.top() << endl;
        else {
            int prev = 0;
            while(!st.empty()) {
                prev = st.top() - 1 + prev;
                st.pop();
            }
            
            if(prev <= 1) cout << -1 << endl;
            else cout << prev << endl;
        }
    }

    return 0;
}