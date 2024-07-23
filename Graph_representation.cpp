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
int N,M,c=0;
int iscyclic=0;
vector<int>visited(NN);
vector<int>visited2(NN);
ll dis[NN]={-1};
vector<int>ans;
vector<ll>P(NN);
vector<vector<int>>adj(NN);
//vector<int>bridges;
void dfs(int u,int par=-1){
    visited[u]=1;
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

void BFS(int src){
    priority_queue <int,vector<int>,greater<int> > Q;
    Q.push(src);
    // dis[src]=0;
    visited[src]=1;
    while(!Q.empty()){
        int u=Q.top();
        cout<<u<<' ';
        Q.pop();
        for(auto v:adj[u]){
            if(!visited[v]){
                // dis[v]=dis[u]+1;
                visited[v]=1;
                Q.push(v);
            }
        }
    }
}
// vector<int> dfs1_path(int node){
//     visited[node] = 1;
//     ans.push_back(node);
//     if(node==M){
//         return ans;
//     }
//     for(auto x:adj[node]) {
//        if(!visited[x]){
//         vector<int> path = dfs1_path(x);
//         if (!path.empty()) {
//                 return path;
//         }
//        }
//     }
//     ans.pop_back();
//     visited[node] = 0;
//     return {}; 
// }
void BFS2(int src,int dist){
    queue<int> Q;
    Q.push(src);
    P[src]=-1;
    dis[src]=dist;
    while(!Q.empty()){
        int u=Q.front();
        // cout<<u<<' ';
        Q.pop();
        for(auto v:adj[u]){
            if(dis[v]<=0){
                dis[v]=dis[u]+1;
                P[v]=u;
                Q.push(v);
            }
        }
    }
}
int main(){
    cin>>N>>M;
    for(int i=0;i<M;i++){
         int a,b;
         cin>>a>>b;
         adj[a].push_back(b);
         adj[b].push_back(a);
    }
    BFS2(1,1);
    int diss=dis[N];
    if(diss!=0){
        int p=N;
        while(p!=-1){
            ans.push_back(p);
            p=P[p];
        }
        reverse(ans.begin(),ans.end());
        cout<<diss<<endl;
       for (int i = 0; i < ans.size(); i++)cout << ans[i] << " ";
    }else cout<<"IMPOSSIBLE";
}




//int main(){
//    cin>>N>>M;
//    if(M!=(N-1)){ cout<<"No"; return 0;}
//     for(int i=0;i<M;i++){
//         int a,b;
//         cin>>a>>b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     dfs(1);
//      for(int j=1;j<=N;j++){
//          if(!visited[j]) {
//              cout<<"No";   return 0;
//          }
//          if(adj[j].size()>2){cout<<"No"; return 0;}
//      }
//      cout<<"Yes";
//    if(!iscyclic&&c)
//        cout<<"Yes";
//    else
//        cout<<"No";
//}
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

// #include <iostream>
// #include <queue>
// #include <cstring>

// using namespace std;

// const int MAXN = 1005;

// int n, m;
// char maze[MAXN][MAXN];
// bool visited[MAXN][MAXN];
// int dist[MAXN][MAXN];
// int prev_row[MAXN][MAXN], prev_col[MAXN][MAXN];

// const int dr[] = {-1, 0, 1, 0};
// const int dc[] = {0, 1, 0, -1};
// const char dir[] = {'U', 'R', 'D', 'L'};

// void bfs(int sr, int sc, int er, int ec) {
//     queue<pair<int, int>> q;
//     q.push({sr, sc});
//     visited[sr][sc] = true;
//     dist[sr][sc] = 0;
//     while (!q.empty()) {
//         int r = q.front().first;
//         int c = q.front().second;
//         q.pop();
//         if (r == er && c == ec) {
//             return;
//         }
//         for (int d = 0; d < 4; ++d) {
//             int nr = r + dr[d];
//             int nc = c + dc[d];
//             if (nr < 0 || nr >= n || nc < 0 || nc >= m) {
//                 continue;
//             }
//             if (maze[nr][nc] == '#' || visited[nr][nc]) {
//                 continue;
//             }
//             visited[nr][nc] = true;
//             dist[nr][nc] = dist[r][c] + 1;
//             prev_row[nr][nc] = r;
//             prev_col[nr][nc] = c;
//             q.push({nr, nc});
//         }
//     }
// }

// int main() {
//     cin >> n >> m;
//     int sr, sc, er, ec;
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cin >> maze[i][j];
//             if (maze[i][j] == 'A') {
//                 sr = i;
//                 sc = j;
//             } else if (maze[i][j] == 'B') {
//                 er = i;
//                 ec = j;
//             }
//         }
//     }
//     bfs(sr, sc, er, ec);
//     if (!visited[er][ec]) {
//         cout << "NO" << endl;
//     } else {
//         cout << "YES" << endl;
//         cout << dist[er][ec] << endl;
//         string path;
//         int r = er, c = ec;
//         while (r != sr || c != sc) {
//             int pr = prev_row[r][c];
//             int pc = prev_col[r][c];
//             for (int d = 0; d < 4; ++d) {
//                 if (pr == r + dr[d] && pc == c + dc[d]) {
//                     path += dir[d];
//                     break;
//                 }
//             }
//             r = pr;
//             c = pc;
//         }
//         reverse(path.begin(), path.end());
//         cout << path << endl;
//     }
//     return 0;
// }
