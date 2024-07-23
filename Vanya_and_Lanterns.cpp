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
   int n,l;
    cin>>n>>l;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int d = 2 * max(arr[0],l-arr[n-1]);

    for(int i=1;i<n;i++){
        d = max(d,(arr[i]-arr[i-1]));
    }
    cout<<fixed<<setprecision(9)<<(double) d/2;
}