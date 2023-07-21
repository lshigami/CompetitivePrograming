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
        ll a,b,c;
        cin>>a>>b>>c;
        if(c<=a || c<=b) cout<<"-"<<endl;
        else cout<<"+"<<endl;
    }
}