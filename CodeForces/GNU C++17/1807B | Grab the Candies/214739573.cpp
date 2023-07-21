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
        ll a[n];
        ll ev=0;
        ll od=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) ev+=a[i];
            else od+=a[i];
        }
        if(ev>od) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}