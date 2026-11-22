#include <bits/stdc++.h>
using namespace std;

class Cmp {
public:
    bool operator()(pair<int,int> a, pair<int,int> b) {
        return a.first < b.first;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    priority_queue<pair<int,int>, vector<pair<int,int>>, Cmp> pq;
    queue<pair<int,int>> q;
    map<int, bool> mp;

    int i = 1;
    while(cs--) {
        int num; cin >> num;
        if(num == 1) {
            int val; cin >> val;
            pq.push({val, i});
            q.push({val, i});
            i++;
        }
        else if(num == 2) {
            while(mp.find(q.front().second) != mp.end()) q.pop();
            cout << q.front().second << " ";
            mp[q.front().second] = true;
            q.pop();
        }
        else { // num == 3
            while(mp.find(pq.top().second) != mp.end()) pq.pop();
            cout << pq.top().second << " ";
            mp[pq.top().second] = true;
            pq.pop();
        }
    }

    return 0;
}