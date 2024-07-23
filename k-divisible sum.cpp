

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
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
            cin>>n>>k;
            if(n==1){
                cout<<k<<"\n";
                continue;;
            }
            if(n==k){
                cout<<1<<"\n";
               continue;;
            }
            if(n<k){
                int a=k/n;
                int b=k%n;
                if(b!=0) a++;
                cout<<a<<"\n";
                continue;;
            }
            else{
                int c=n/k;
                int d=n%k;
                if(d!=0) c++;
                k*=c;
                int a=k/n;
                int b=k%n;
                if(b!=0) a++;
                cout<<a<<"\n";
                continue;
            }
    }
    
}