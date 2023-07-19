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
    str a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    str x=a+b;
    sort(x.begin(),x.end());
    sort(c.begin(),c.end());
    if(x==c) cout<<"YES"; else cout<<"NO";
 
}