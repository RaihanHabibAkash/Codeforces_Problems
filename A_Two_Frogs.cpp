#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, x, y; cin >> n >> x >> y;

        while(true) {
            if(x < y) {
                if(x+1 < y) x++;
                else if(x-1 > 0) x--;
                else {
                    cout << "NO" << endl;
                    break;
                }

                if(x < y-1) y--;
                else if(y+1 <= n) y++;
                else {
                    cout << "YES" << endl;
                    break;
                }
            }
            else { // x > y
                if(y < x-1) x--;
                else if(x+1 <= n) x++;
                else {
                    cout << "NO" << endl;
                    break;
                }

                if(y+1 < x) y++;
                else if(y-1 > 0) y--;
                else {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}