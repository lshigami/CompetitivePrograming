# include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define str string
#define strstr stringstream
#define sz s.size()
ll Count(ll a[], ll n){
 ll ans=0;
 ll cnt=0;
 for(int i=0;i<n;i++){
  ll x=a[i];
  if(x) cnt++;
  else ans+=cnt;
 }
 return ans;
}
int main(){
 ll t;
 cin>>t;
 while(t--){
  ll n;
  cin>>n;
  ll a[n];
  ll b[n];
  ll c[n];
  for(int i=0;i<n;i++){
   cin>>a[i];
   b[i]=a[i];
   c[i]=a[i];
  }
  for(int i=0;i<n;i++){
   if(!b[i]) {
    b[i]=1;
    break;
   } 
  }
  for(int i=n-1;i>=0;i--){
   if(c[i]) {
    c[i]=0;
    break;
   }
  }
  cout<<max({Count(a,n),Count(b,n),Count(c,n)})<<endl;
 }
}