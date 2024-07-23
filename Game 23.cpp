#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<int,int>
#define dbg printf("in");
#define NL cout<<'\n';
#define MAX_INT 1000000
#define pi 3.1416
#define MOD 1000000007

#define Size 100010
#define oo 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define NL cout<<'\n';

int main(){
    ll n,c,ans=0;cin>>n>>c;
    ll d=c/n;
    if(n==c){
        cout<<0;
        return 0;
    }
    else if(c%n!=0){
        cout<<-1;
    }
    else{
        while(d%2==0){
            d/=2;
            ans++;
        }
        while(d%3==0){
            d/=3;
            ans++;
        }
        if(d!=1) ans=-1;
        cout<<ans;
    }
}