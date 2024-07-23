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
    int n;cin>>n;
    vector<int>arr(n);
    vector<int>sum(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sum[0]=arr[0];
    for(int i=0;i<n;i++){
        if (i > 0) {
            arr[i] += arr[i - 1];
        }
    }
    int L;cin>>L;
    while(L--){
        int ans=INT_MAX;
        int l1;cin>>l1;
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
             if (arr[mid] == l1) {
                ans = mid + 1;
                break;
            }
            if (arr[mid] > l1) {
                ans = min(ans, mid + 1);
                r = mid - 1;   
            } else if (arr[mid] <l1) {
                l = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
}