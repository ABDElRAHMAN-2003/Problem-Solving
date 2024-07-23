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
int N,M,c=0;
int iscyclic=0;
vector<int>visited(NN);
vector<int>P(NN);
vector<int>ans(NN);
vector<vector<int>>adj(NN);
//vector<int>bridges;

void dfs(int u,int par=-1){
    visited[u]=1;
    cout<<u<<' ';
    P[u]=par;
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v,u);
        }
        else if(v!=par){
            iscyclic=1;
        }
    }
}
void dfs1(int node){
    visited[node] = true;
    for(auto x:adj[node]) {
        if(!visited[x]) dfs1(x);
    }
}

int S1,S2;
int main(){
cin>>N>>M;
for(int i=0;i<M;i++){
    cin>>S1>>S2;
    adj[S1].push_back(S2);
    adj[S2].push_back(S1);
}
for(int i=1;i<N;i++){
    if(!visited[i])
        dfs(i);

}
}


// for(int x:ans){
//     cout<<x<<' ';
// }
// for(int j=0;j<adj.size();j++){
//     // dfs(adj[j]);
// }
// if(iscyclic){
//     cout<<"No";
// }
// else{
//     cout<<"Yes";
// }
// }
































//int main(){
//    FIO;
//    int N,Q;
//    cin>>N>>Q;
//    set<pp> arr;
//    for(int i=1;i<=Q;i++){
//        int t,a,b;
//        cin>>t>>a>>b;
//        switch (t) {
//            case (1):
//                arr.insert({a,b});
//                break;
//            case (2):
//                arr.erase({a,b});
//                break;
//            case (3):
//                if(arr.count({a,b})&&arr.count({b,a})){
//                    cout<<"Yes"<<endl;
//                }
//                else{
//                    cout<<"No"<<endl;
//                }
//                break;
//        }
//    }
//}
// int main(){
//     cin>>N>>M;
//     if(M!=(N-1)){ cout<<"No"; return 0;}
//      for(int i=0;i<M;i++){
//          int a,b;
//          cin>>a>>b;
//          adj[a].push_back(b);
//          adj[b].push_back(a);
//      }
//      dfs(1);
//       for(int j=1;j<=N;j++){
//           if(!visited[j]) {
//               cout<<"No";   return 0;
//           }
//           if(adj[j].size()>2){cout<<"No"; return 0;}
//       }
//       cout<<"Yes";
//    if(!iscyclic&&c)
//        cout<<"Yes";
//    else
//        cout<<"No";
// }
//int n,m,d[NN];
//vector<int> G[NN];
//bool st[NN];
//
//   void dfs(int u, int fa) { // 当前结点 父结点
//        st[u] = 1;
//        for (int i = 0; i < G[u].size(); i++) {
//            int v = G[u][i];
//            if (v == fa || st[v]) continue;
//            dfs(v, u);
//        }
//    }
//    int main() {
//        cin >> n >> m;
//        for (int i = 1; i <= m; i++) {
//            int u, v;
//            scanf("%d%d", &u, &v);
//            G[u].push_back(v);
//            G[v].push_back(u);
//            d[u]++, d[v]++; // 判断链条
//        }
//
//
//        dfs(1, 0); // 学会在简单图上遍历
//        for (int i = 1; i <= n; i++) { // 判断连通性
//            if (!st[i]) { // == 0
//                puts("No");
//                return 0;
//            }
//        }
//
//        int c1 = 0, c2 = 0;
//        for (int i = 1; i <= n; i++) {
//            if (d[i] == 1) c1++;
//            else if (d[i] == 2) c2++;
//        }
//        if (c1 == 2 && c2 == n - 2)
//            puts("Yes");
//        else
//            puts("No");
//        return 0;
//    }