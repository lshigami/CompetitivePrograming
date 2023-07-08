# include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define str string
#define strstr stringstream
#define sz s.size()
#define f first
#define s second
int main(){
 ll t;
 cin>>t;
 while(t--){
  ll n;
  cin>>n;
  ll a[n];
  set<ll>s;
  for(int i=0;i<n;i++) {
   cin>>a[i];
   s.insert(a[i]);
  }
  auto Max=--s.end();
  auto NearMax=(--s.end());
  NearMax--;
  ll cnt=0;
  for(int i=0;i<n;i++){
   if(a[i]==*Max) cnt++;
  }
  if(s.size()==1 || cnt>1){
   for(int i=0;i<n;i++){
    cout<<a[i]-*Max<<" ";
   }
   cout<<endl;
  }
  else {
   for(int i=0;i<n;i++){
    if(a[i]==*Max) cout<<a[i]-*NearMax<<" ";
    else cout<<a[i]-*Max<<" ";
   }
   cout<<endl;
  }
 }
}