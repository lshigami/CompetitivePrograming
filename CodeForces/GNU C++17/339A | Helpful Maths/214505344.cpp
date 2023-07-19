#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main(){
    faster
    string s;
    cin>>s;
    vector<char> digits;
    for (char c : s) {
        if (isdigit(c)) {
            digits.push_back(c);
        }
    }
    sort(digits.begin(), digits.end());
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
        if (i != digits.size() - 1) {
            cout << '+';
        }
    }
}