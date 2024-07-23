#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416

const int NN=2e5+5;
vector<int>adj[NN];
int N,M,Y,c=0;
int iscyclic=0;
vector<int>visited(NN);
vector<int>dis={-1};
vector<int>ans;

void BFS(int src){
    priority_queue <int, vector<int>, greater<int> > Q;
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

void BFS2(int src){
    queue<int>Q;
    Q.push(src);
    visited[src]=1;
    while(!Q.empty()){
        int u=Q.front();
        if(u==Y){
           cout<<u<<' ';
            break;
        }
        cout<<u<<' ';
        Q.pop();
        for(auto v:adj[u]){
            if(!visited[v]){
                // dis[v]=dis[u]+1;
                visited[v]=1;
                if(v==Y){
                    Q.pop();
                    Q.push(v);
                    break;
                }
                Q.push(v);
            }
        }      
    }

}

vector<int> dfs1(int node){
    visited[node] = 1;
    ans.push_back(node);
    if(node==Y){
        return ans;
    }
    for(auto x:adj[node]) {
       if(!visited[x]){
        vector<int> path = dfs1(x);
        if (!path.empty()) {
                return path;
        }
       }
    }
    ans.pop_back();
    visited[node] = 0;
    return {};   
}

int main(){
    cin>>N>>M>>Y;
    int S1,S2;
    for(int i=0;i<N-1;i++){
        cin>>S1>>S2;
        adj[S1].push_back(S2);
        adj[S2].push_back(S1);
    }
    vector<int> path=dfs1(M);
     for (int node : path) {
        cout << node << " ";
    }
    return 0;
}
