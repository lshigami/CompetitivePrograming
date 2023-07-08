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
  ll n; cin>>n;
  str s; cin>>s;
  char tmp='a';
  for(int i=0;i<s.size();i++){
   tmp=max(tmp,s[i]);
  }
  // tmp se la tu lon nhat ! 
  cout<<tmp-'a'+1<<endl;
 }
}