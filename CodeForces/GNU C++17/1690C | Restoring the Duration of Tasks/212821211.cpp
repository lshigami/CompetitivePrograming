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
 
int main() {
    faster
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int &x:a ) cin>>x;
        for(int &x: b) cin>>x;
        cout<<b[0]-a[0]<<" ";
        for(int i=1;i<n;i++){
            if(a[i]>=b[i-1]) cout<<b[i]-a[i]<<" ";
            else cout<<b[i]-b[i-1]<<" ";
        }
        cout<<endl;
    }
}