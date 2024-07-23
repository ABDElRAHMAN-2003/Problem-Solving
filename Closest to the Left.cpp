#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416
#define MAX_INT 1000000
#define Size 100010
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)

int main(){
    FIO;
    ll n,k;cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];

    for(ll i=0;i<k;i++){
        ll q;cin>>q;
        auto it=upper_bound(arr.begin(),arr.end(),q);
        cout<< it-arr.begin() <<endl;
    }
}