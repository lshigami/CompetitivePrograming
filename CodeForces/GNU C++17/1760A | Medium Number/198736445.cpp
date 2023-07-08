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
  ll a,b,c;
  cin>>a>>b>>c;
  set<ll>s;
  s.insert(a);
  s.insert(b);
  s.insert(c);
  auto it=s.begin();
  it++;
  cout<<*it<<endl;
 }
}