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
 char tmp='a';
 char alphabet[27]; //alphabet[1]=a
 for(int i=1;i<=26;i++) {
  alphabet[i]=tmp;
  tmp++;
 }
 while(t--){
  ll x;
  cin>>x;
  char a[x];
  ll MAX=INT_MIN;
  for(int i=0;i<x;i++) {
   cin>>a[i];
   MAX=max(MAX,(ll)a[i]);
  }
  for(int i=1;i<=26;i++){
   if(alphabet[i]==MAX) cout<<i<<endl;
  }
 }
}