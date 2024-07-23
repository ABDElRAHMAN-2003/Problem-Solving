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

void solve(){
string s,code="codeforces";cin>>s;
int c=0;
for(int i=0;i<s.length();i++){
    if(s[i]!=code[i])
        c++;
}
cout<<c<<endl;
}
void solve2(){
    int n;cin>>n;
    int c=0,c2=0;
    while(n--){
    int s;cin>>s;
        if(s==0){
            c2++;
            c=max(c,c2);
        }
        else if(s==1){
            c2=0;
        }
    }
    cout<<c<<endl;
}
void solve3(){
    int n;cin>>n;
        int m1 = INT_MAX, m2 = INT_MAX, ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int m; string s; cin >> m >> s;
            if (s[0] == '1') m1 = min(m1, m);
            if (s[1] == '1') m2 = min(m2, m);
            if (s == "11") ans = min(ans, m);
        }
        if (ans != INT_MAX) {
            cout << ans << endl;
        } else if (m1 != INT_MAX && m2 != INT_MAX) {
            cout << m1 + m2 << endl;
        } else {
            cout << -1 << endl;
        }
 }
 void solve4(){
    ll n,k;cin>>n>>k;
    vector<ll>V;
    ll i=0;
    for(i=1;i<=inf;i++){
        if(i%n>0)
            V.push_back(i);
        if(V.size()>k)
            break;
    }
    cout<<V[k-1]<<endl;
}
void solve5(){

    long long int n , k ;
    cin >> n >> k;

    long long int div = k / (n-1) ;
    long long int ex = k % (n-1) ;
    long long int ans = n * div + ex ;
    if(ex == 0)
        ans -- ;
    cout << ans << endl ;


}

int main(){
    FIO;
    int t;cin>>t;
    while(t--){
        solve5();
    }
}
