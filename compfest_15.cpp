

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

void abm(){
    ll N;cin>>N;
    int arr[N+1];
    int mi=MAX_INT;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        arr[i]=abs(arr[i]);
        mi=min(mi,arr[i]-0);
    }
    cout<<mi;
}

int main(){
    abm();
}