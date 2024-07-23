#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;
typedef long long int ll;

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

const int NN=2e5+5;

void solve1(){
    int n,s,c=0;
    cin>>n>>s;
    while(n--){
        string s1;cin>>s1;
        if(s1.size()>1){
            int u=s1[0]-'0';
            u++;
            if(s<u){
                c++;
                s+=10;
            }
            s-=u;
        }
        else{
            int u2=s1[0]-'0';
            if(s<u2){
                c++;
                s+=10;
            }
             s-=u2;
        }
    }
    cout<<c;
}

void solve2(){
    int n,x,t,counter=0;cin>>n>>x>>t;
    for(int mask=0; mask < (1<<n); mask++){
        vector<int>P;
        for(int i=0; i<n; i++){
            if((mask>>i)&1){
                P.push_back(i);
            }
            if(P[t]==x){
            counter++;
        }
        } 
        
    }
    cout<<counter;
}

void solve3(){
    int n;cin>>n;
    int sum=0;
    while(n--){
        int t,y;cin>>t>>y;
        sum=max(sum,t+y);
    }
    cout<<sum;
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve1();
    }
}