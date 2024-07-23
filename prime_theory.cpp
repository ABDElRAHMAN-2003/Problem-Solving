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
//vector<ll>D={0};
//bool isprime(long long j){
//    long long temp=sqrt(j);
//    if(j<=1)return 0;
//    if(j%2==0&&j!=2){
//        return 0;
//    }
//    for(int i=3;i<temp;i+=2){
//        if(j%i==0){
//            return 0;
//        }
//    }
//    return 1;
//}
//
ll gcdD(ll a,ll b){
    if(b==0){
        return a;
    }
    return gcdD(b,a%b);
}

ll c=0;
ll n;
//int main (){
//    cin>>n;
//    for(int o=2;;o++) {
//        int flag=1;
//        for (int i = 2; i <=sqrt(o); i++) {
//            if (o % i == 0) {
//                flag=0;
//                break;
//            }
//        }
//        if(flag){
//            cout<<o<<' ';
//            c++;
//        }
//        if(c==n){
//            break;
//        }
//    }
//}
int main(){
//    ll a,b;cin>>a>>b;
//    cout<<a/gcdD(a,b) * b;
//    ll n;
//    cin>>n;
//    set<ll>s;
//    for(ll i=1;i<=sqrt(n);i++){
//        if(n%i==0){
//            s.insert(i);
//            s.insert(n/i);
//        }
//    }
//    for(auto i:s)cout<<i<<endl;
//pair<ll,ll>P;
//ll c=0;
//ll r,l;
//cin>>r>>l;
//for(int i=r;r<=l;r++){
//    for(int j=l;l>=r;l--){
//        if(gcdD(i,j)==1){                                 // false need to be revised 
//            P.first=i;
//            P.second=j;
//            c++;
//        }
//    }
//}
//if(c>1){
//    cout<<"YES";
//    for(int i=0;i<c;i++){
//        cout<<P.first;
//        cout<<P.second;
//        cout<<endl;
//    }
}
else
    cout<<"NO";

}