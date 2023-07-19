#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        vector<long long> v(7);
        map<long long, long long> mp;
        for (int i = 0; i < 7; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (int i = 2; i < 7; i++) {
            if ((mp[v[0] + v[1] + v[i]] > 0 && (v[0] + v[1] != v[i])) || (v[0] + v[1] == v[i] && mp[v[i]] >= 2)) {
                cout << v[0] << " " << v[1] << " " << v[i] << endl;
                break;
            }
        }
    }
 
    return 0;
}