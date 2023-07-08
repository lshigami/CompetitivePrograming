#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    unordered_set<string> st;
    for (int i = 0; i < n; i++) st.insert(s[i]);
    for (int i = 0; i < n; i++) {
        bool ok = false;
        for (int j = 1; j < s[i].size(); j++) {
            string a = s[i].substr(0, j);
            string b = s[i].substr(j);
            if (st.count(a) && st.count(b)) {
                ok = true;
                break;
            }
        }
        cout << ok;
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}