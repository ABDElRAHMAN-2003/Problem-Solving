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

vector<ll>req(2);ll z=0;
ll GoT;
vector<ll>have(3);
vector<ll>Price(3);

bool ok(ll left){
    ll needb=max(z,left*req['B']-have[0]),needs=max(z,left*req['S']-have[1]),needc=max(z,left*req['C']-have[2]);
    ll total=(needb*Price[0])+(needs*Price[1])+(needc*Price[2]);
    if(total<=GoT) return true;
    return false;
}
int main(){
    string s;cin>>s;
    for(auto x:s) req[x]++;
    for(int i=0;i<3;i++) cin>>have[i];
    for(int i=0;i<3;i++) cin>>Price[i];
    cin>>GoT;
    ll low=0,high=1e15;
    while(low<=high){
        ll mid=(high+low)/2;
        if(ok(mid))low=mid+1;
        else high=mid-1;
    }
    cout<<high;
}