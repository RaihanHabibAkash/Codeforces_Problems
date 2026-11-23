#include <bits/stdc++.h>
using namespace std;


class Cmp {
public:
    bool operator()(pair<int,int> a, pair<int,int> b) {
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    priority_queue<pair<int,int>, vector<pair<int,int>>, Cmp> pq;
    queue<int> q;
    map<int, bool> mp;

    int i = 1;
    while(cs--) {
        int type; cin >> type;

        if(type == 1) {
            int money; cin >> money;
            pq.push({money, i});
            q.push(i);
            i++;
        }
        else if(type == 2) {
            while(mp.find(q.front()) != mp.end()) q.pop();
            cout << q.front() << " ";
            mp[q.front()] = true;
            q.pop();
        }
        else {
            while(mp.find(pq.top().second) != mp.end()) pq.pop();
            cout << pq.top().second << " ";
            mp[pq.top().second] = true;
            pq.pop();
        }
    }
    cout << endl;

    return 0;
}