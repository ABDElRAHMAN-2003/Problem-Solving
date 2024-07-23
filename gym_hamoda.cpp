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
int t=3;

void A(){
    ll w, h;
    cin>>w>>h;
    if (w == h) {
        puts("Square");
    } else {
        puts("Rectangle");
    }
}
void B(){
    lf s,n;
    cin>>n>>s;
    lf r = s / (2 * sin(pi/n));
    lf A = pi * pow(r, 2);
    cout<<A;

}
void C(){
    ll B,g;
    int flag1=0,flag2=0,flag3=0;
    cin>>B>>g;
    if(B>6||g>6){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<=t;i++){
        ll a,b;cin>>a>>b;
        if(i==1&&(3-a)>=0&&(3-b)>=0){
            flag1=1;
        }
        if(i==2&&(2-a)>=0&&(2-b)>=0){
            flag2=1;
        }
        if(i==3&&(1-a)>=0&&(1-b)>=0){
            flag3=1;
        }
    }
    if(flag1&&flag2&&flag3){
        cout<<"YES"<<endl;
        return;
    }
}
void D(){
    ll n;
    cin>>n;
    ll arr[NN];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll min=*min_element(arr, arr + n);
    ll max=*max_element(arr, arr + n);
    ll sup=(max-min)+1;
    cout<<sup-n;

}
int main(){
    FIO;
    int t=1;
//    scanf("%d",&t);
    while(t--) {
        D();
    }
}