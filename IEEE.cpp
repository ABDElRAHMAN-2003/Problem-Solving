#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416

#define Size 100010
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)

int freq=0,c=0;
void solve(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            freq++;
        }
    }
    if((s.size()-freq)>=freq){
        for(int i=0;i<s.size();i++){
           putchar(tolower(s[i]));
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            putchar(toupper(s[i]));
        }
}
}

void solve2(){
    int n;cin>>n;
    while(n--){
        int u;cin>>u;
        c+=u;
        if(c<0){
            freq++;
            c=0;
        }   
    }
    cout<<freq;
}

void solve3(){
    ll n;cin>>n;
    ll ap=n*(n+1)/2;
    ll a=1;
    while(a<=n){
        ap-=2*a;
        a*=2;
    }
    cout<<ap<<endl;
}

int main(){
    FIO;
    int t=1;cin>>t;
    while(t--){
        solve3();
    }  
}