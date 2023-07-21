# include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define str string
#define strstr stringstream
#define sz s.size()
#define f first
#define s second
#define endl '\n'
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main(){
    faster
    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        str s; cin>>s;
        map<char,int>m;
        m[s[0]]=1;
        for(int i=1;i<s.size();i++){
            if(m[s[i]]==0) {
                if(m[s[i-1]]==1) m[s[i]]=2;
                else m[s[i]]=1;
            }
        }
        bool ok=true;
        for(int i=1;i<sz;i++){
            if(m[s[i]]==m[s[i-1]]) {
                cout<<"NO"<<endl;
                ok=false;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
    }
}