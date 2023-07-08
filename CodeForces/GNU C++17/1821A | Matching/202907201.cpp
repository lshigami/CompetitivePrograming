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
 ll t; cin>>t;
 while(t--){
  str s;
  cin>>s;
  map<ll,ll>m;
  for(int i=0;i<sz;i++){
   if(s[i]=='?') m[i]=1;
  }
  ll cnt=-1;
  if(m[0]==1){
   if(m.size()>1) cnt=(ll)pow(10,m.size())-1 -(ll)pow(10,m.size()-1) +1;
   else cnt=(ll)pow(10,m.size())-1;
  }
  else {
   cnt=(ll)pow(10,m.size()-1);
  }
  if(s[0]!='0') cout<<cnt<<endl;
  else cout<<'0'<<endl;
 }
}