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
  str s;
  cin>>s;
  map<char,ll>m;
  for(int i=0;i<n;i++){
   m[s[i]]++;
  }
  ll cnt=0;
  for(int i=0;i<n;i++){
   while(m[s[i]]){
    if(m[s[i]]==1) cnt+=2;
    else cnt++;
    m[s[i]]-=1;
   }
  }
  cout<<cnt<<endl;
 }
}