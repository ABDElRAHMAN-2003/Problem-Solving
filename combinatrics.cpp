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


//
long long binpoww(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1; // div by 2
    }
    return res;
}
long long factorial(long long a){
    ll res=1;
    for(ll i=2;i<=a;i++){
        res=(res*i)%MOD;
    }
    return res;
}
ll fact(ll a){
    if(a<=0)
        return 1;
    return a*fact(a-1);
}
//
//long long NCR(long long a, long long b){
//    if(b>a)return 0;
//    return (factorial(a)%MOD)/((factorial(a-b)%MOD)*(factorial(b)%MOD));
//}

long long nCr(long long a,long long b){
    ll p=1,k=1;
    if(a-b<b){
        b=a-b;
    }
    while(b){
        p*=a;
        k*=b;
        ll gcd=__gcd(p,k);
        p/=gcd;
        k/=gcd;
        a--;
        b--;
    }
    return p%MOD;
}

//ll pascal[1001][1001];
//int i_pascal(){
//    pascal[0][0]=1;
//
//    for(int i=1;i<1001;i++) {
//        pascal[i][0] = 1;
//
//        for(int j=1;j<i+1;j++){
//            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
//        }
//    }
//    return 0;
//}

//long long c(long long a,long long b){
//    return pascal[a][b];
//}
ll fact_mod(ll a){
    if(a<=0)
        return 1;
    ll res=1;
    for(ll i=2;i<=a;i++){
        res=(res*i)%MOD;
    }
    return res;
}
int main(){

    FIO;
//
//    string s;
//    ll o=1;
//    cin>>s;
//    long long q= s.length();
//    for(int i=0;i<q;i++){
//        freq[s[i]]++;
//    }
//    for(auto x:freq){
//        if(x.second>1){
//            o*= fact_mod(x.second);
//            o%=MOD;
//        }
//    }
//    cout<<(fact_mod(q)*binpoww(o,MOD-2))%MOD;
//    return 0;
int t;cin>>t;
while(t--){
    ll q;
    cin>>q;
//cout<<fact_mod(q);
    cout<<(ll) sqrt(q-1)<<endl;
}

}