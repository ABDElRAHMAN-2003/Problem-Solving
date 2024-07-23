#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<int,int>
#define dbg printf("in");
#define NL cout<<'\n';
#define MAX_INT 1000000
#define pi 3.1416

#define Size 100010
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define NL cout<<'\n';

void Dp(){
    int n,q;cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    vector<int>cost(n+1,0);
    cost[2]=abs(arr[2]-arr[1]);
    for(int i=3;i<=n;i++)
        cost[i]=min(cost[i-1]+abs(arr[i]-arr[i-1]),cost[i-2]+abs(arr[i]-arr[i-2]));
    cout<<cost[n];
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        Dp();
    }
}