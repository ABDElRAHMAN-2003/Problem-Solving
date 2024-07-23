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

int main(){
    ll n,k;cin>>n>>k;
    int req[n+1],have[n+1];
    for(int i=0;i<n;i++)cin>>req[i];
    for(int i=0;i<n;i++)cin>>have[i];
    ll low=0,high=2001;
    while(low<=high){
        ll mid=low+(high-low)/2;
        ll z=0,cost=0;
        for(int i=0;i<n;i++){
            cost+=max(req[i]*mid-have[i],z);
            cout<<cost<<endl;
        }
        if(cost<=k) low=mid+1;
        else high=mid-1;
    }
    cout<<high;
    
}