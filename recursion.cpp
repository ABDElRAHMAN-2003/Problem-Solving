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
//ll N;
//ll sum;
//int ans=20 * 1000000000LL;
//int diff=0;
//ll A[40];

//ll recur(int u){
//    if(u==0)
//        return 1;
//    return recur(floor(u/2))+ recur(floor(u/3));
//}
//
//void solve(int x) {
//    if (x == n) {
//        ans = min(abs(diff), ans);
//        return;
//    }
//        diff += arr[x];
//        solve(x + 1);
//        diff -= 2 * arr[x];
//        solve(x + 1);
//        diff += arr[x];
//}
//
//void joke(){
//    ll count=0;
//    for(int mask=0;mask<(1<<n);mask++){
//        int sum=0;
//        for(int bit=0;bit<n;bit++){
//            if(mask&(1<<bit)){
//                sum+=arr[bit];
//            }
//        }
//        if(sum==z){
//            count++;
//        }
//    }
//    cout<<count;
//}
//
//int findSubsetSum(){
//
//        int matrix[N + 1][sum + 1];
//        matrix[0][0] = 1;
//        for(int k = 1; k <= sum; k++){
//            matrix[0][k] = 0;
//        }
//        for(int k = 1; k <= N; k++){
//            matrix[k][0] = 1;
//        }
//
//        for(int k = 1; k <= N; k++){
//            for(int l = 1; l <= sum; l++){
//                if(A[k - 1] > l)
//                    matrix[k][l] = matrix[k - 1][l];
//                else{
//                    matrix[k][l] = matrix[k - 1][l] + matrix[k - 1][l - A[k - 1]];
//                }
//            }
//        }
//        return matrix[N][sum];
//}

//ll freq[INT_MAX]={0};
//ll convert(int n){
//    long long bin = 0;
//    int rem, i = 1;
//    while (n!=0) {
//        rem = n % 2;
//        n /= 2;
//        bin += rem * i;
//        i *= 10;
//    }
//    return bin;
//}
void E(unsigned long long N){
   bitset<64>bit(N);
   set<int>positions;
   for(int i=0;i<64;i++){
       if(bit[i])
           positions.insert(i);
   }
   for(ll x=0;x<=N;x++){
       bitset<64>bit_x(x);
       bool is_sub= true;
       for(int i=0;i<64;i++){
           if(bit_x[i]&&!positions.count(i)){
                is_sub= false;
                break;
           }
       }
       if(is_sub)
           cout<<x,NL;
   }

}
string s;bool visited[48];
ll Z(int idx,ll ans,char C){
    if(idx==s.size())
        return ++ans;
    if(s[idx]=='?'&&!visited[idx]){
        Z(idx++,ans,s[++idx]);
        Z(idx++,ans,s[++idx]);
        Z(idx++,ans,s[++idx]);
        Z(idx++,ans,s[++idx]);
        visited[idx]=1;
    }
    else if((s[idx]=='D'||s[idx]=='U'||s[idx]=='L'||s[idx]=='R')&&!visited[idx]){
        Z(idx++,ans++,s[++idx]);
        Z(idx++,ans++,s[++idx]);
        Z(idx++,ans++,s[++idx]);
        Z(idx++,ans++,s[++idx]);
        visited[idx]=1;
    }
    ans--;
    visited[idx]=0;
}

int main() {
    cin>>s;
    cout<<Z(0,0,s[0]);






//    unsigned long long N;
//    cin >> N;
//
//    vector<int> ones;
//    for (int i = 0; i < 64; i++) {
//        if ((N >> i) & 1) {
//            ones.push_back(i);
//        }
//    }
//
//    vector<unsigned long long> res;
//    for (unsigned long long x = 0; x <= N; x++) {
//        bool isSubset = true;
//        for (int i : ones) {
//            if (!((x >> i) & 1)) {
//                isSubset = false;
//                break;
//            }
//        }
//        if (isSubset) {
//            res.push_back(x);
//        }
//    }
//
//    for (unsigned long long x : res) {
//        cout << x << endl;
//    }
//
//    return 0;
//    ll n;cin>>n;
//      E(n);



}


// path algorithm with optimization
//#include<bits/stdc++.h>
//#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//using namespace std;
//typedef long long ll;
//typedef long double ld;
//string s;
//bool vis[9][9];
//ll dx[]={-1,1,0,0};
//ll dy[]={0,0,-1,1};
//ll solve(ll idx,ll x,ll y)
//{
//    if(vis[x+1][y] && vis[x-1][y] && !vis[x][y+1] && !vis[x][y-1])return 0;
//    if(!vis[x+1][y] && !vis[x-1][y] && vis[x][y+1] && vis[x][y-1])return 0;
//    if(idx<48 && x==7 && y==1)return 0;
//    if(idx==48)return (x==7 && y==1);
//    ll ans=0;
//    vis[x][y]=true;
//    if(s[idx]=='R')
//    {
//        if(y+1<=7 && !vis[x][y+1])ans+=solve(idx+1,x,y+1);
//    }
//    else if(s[idx]=='D')
//    {
//        if(x+1<=7 && !vis[x+1][y])ans+=solve(idx+1,x+1,y);
//    }
//    else if(s[idx]=='L')
//    {
//        if(y-1>=1 && !vis[x][y-1])ans+=solve(idx+1,x,y-1);
//    }
//    else if(s[idx]=='U')
//    {
//        if(x-1>=1 && !vis[x-1][y])ans+=solve(idx+1,x-1,y);
//    }
//    else
//    {
//        for(int i=0;i<4;i++)
//        {
//            ll nx=x+dx[i];
//            ll ny=y+dy[i];
//            if(vis[nx][ny])continue;
//            if(nx<1 || nx>7 || ny<1 || ny>7)continue;
//            ans+=solve(idx+1,nx,ny);
//        }
//    }
//    vis[x][y]=false;
//    return ans;
//}
//void test_case()
//{
//    cin>>s;
//    vis[1][1]=1;
//    for(int i=1;i<=7;i++)vis[0][i]=vis[i][0]=vis[8][i]=vis[i][8]=true;
//    cout<<solve(0,1,1);
//}
//int main()
//{
////    freopen("input.txt","rt",stdin);
////    freopen("output.txt","wt",stdout);
//    FIO
//    ll t;
//    t=1;
////    cin>>t;
//    while(t--)
//    {
//        test_case();
//    }
//}