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
        int x ; cin>>x; cin.ignore();
        str a,b,c;
        getline(cin,a);
        getline(cin,b);
        getline(cin,c);
        int sum1,sum2,sum3;
        sum1=sum2=sum3=0;
        map<str,int>m1,m2,m3,m;
        strstr aa(a);
        strstr bb(b);
        strstr cc(c);
        set<string>se;
        str temp;
        while(aa>>temp){
            m1[temp]++;
            m[temp]++;
        }
        while(bb>>temp){
            m2[temp]++;
            m[temp]++;
        }
        while(cc>>temp){
            m3[temp]++;
            m[temp]++;
        }
        for(auto x:m){
            if(x.s==3) continue;
            if(x.s==1){
                if(m1[x.f]) sum1+=3;
                if(m2[x.f]) sum2+=3;
                if(m3[x.f]) sum3+=3;
            }
            if(x.s==2) {
                if(m1[x.f]) sum1+=1;
                if(m2[x.f]) sum2+=1;
                if(m3[x.f]) sum3+=1;
            }
        }
 
        cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    }
}