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


void p1(){
    int t;cin>>t;
    while(t--){
        float a,b,c;cin>>a>>b>>c;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
         cout<<ceil((ceil(abs(a-b)/2))/c)<<endl;

    }
}

void p2(){
    int t;cin>>t;
    while(t--){
        int D_r;
        int n,min_r=MAX_INT;cin>>n;
       for(int i=0;i<n;i++){
        int d,s;cin>>d>>s;
        if(n==1){
            min_r=d;
            break;
        }
        D_r=(s/2)+d;
        if(D_r<min_r)min_r=D_r;
    }
    cout<<min_r<<endl;
}
}

int main(){
    FIO;
    p2();
}