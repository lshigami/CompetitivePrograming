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
        ll n;
        cin >> n;
        if(n<4 || n%2!=0) cout<<-1<<endl;
        else {
            ll max=n/4;
            ll min=n/6 + (n%6!=0);
            cout<<min<<" "<<max<<endl;
        }
    }
}