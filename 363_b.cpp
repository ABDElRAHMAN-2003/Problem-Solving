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

const ll MOD = 1e9 + 7;
map<char ,ll>freq;

int P1(){
    int n,k,nums[200005],pos;cin>>n>>k;
    nums[0]=0;
    int m(100000000);
    for (int i=1;cin>>nums[i];i++) nums[i]+=nums[i-1];
    for(int i=0;i<=n-k;i++){
        if(nums[i+k]-nums[i]<m){
            m=nums[i+k]-nums[i];
            pos=i+1;
        }
    }
    return pos; 
}

int P2(){
    int n,c=0,sum=0;
    ll t;
    cin>>n>>t;
    int arr[200005];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int p1=1;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
        if(sum<=t){
            c++;
        }
        else{
            sum-=arr[p1];
            p1++;
        }
    }
    return c;
    // int l=1,r=n;
    // int mid;
    // while(l<=r){
    //     mid=(r-l)/2;
    //     if(t-mid==0){
    //         c++;
    //         break;
    //     }
    //     if(t-mid>0){
    //         t-=mid;
    //         r=mid-1;
    //         c++;
    //     }
    //     else if(t-mid<0){
    //         l=mid+1;
    //     }
    // }
    // return c;

}

int main(){
    FIO;
    int t=1;
    // cin>>t;
    while(t--){
        cout<<P2();
    }
}

