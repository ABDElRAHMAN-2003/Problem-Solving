#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
typedef long long ll;
typedef long double ld;
const int N = 2e5 + 35, LG = 22, mod = 998244353, base1 = 127, base2 = 1000721;
ll tree[4*N];
int a[N];
int n;

void build(int ni=0, int ns = 0, int ne = n-1){
    //base case
    if(ns == ne){
        tree[ni] = a[ns];
        return;
    }
    int mid = ns+ne>>1, lf = 2*ni+1, rt = 2*ni+2;
    build(lf, ns, mid);
    build(rt, mid+1, ne);
    tree[ni] = min(tree[lf], tree[rt]);
}

void update(int pos, int val, int ni=0, int ns=0, int ne=n-1){
    if(ns == ne){
        tree[ni] = val;
        return;
    }
    int mid = ns+ne>>1, lf = 2*ni+1, rt = 2*ni+2;
    if(pos<=mid)    update(pos, val, lf, ns, mid);
    else            update(pos, val, rt, mid+1, ne);
    tree[ni] = min(tree[lf], tree[rt]);
}

ll query(int qs, int qe, int ni=0, int ns=0, int ne=n-1){
    if(ns>=qs && ne<=qe){
        return  tree[ni];
    }
    if(ns>qe || ne<qs)    return 1e9;
    int mid = ns+ne>>1, lf = 2*ni+1, rt = 2*ni+2;
    return min(query(qs, qe, lf, ns, mid), query(qs, qe, rt, mid+1, ne));
}

void test_case(){
    cin>>n;
    ll x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a[i]=x+y>>1;
    }
    build();
    int q;cin>>q;

    while(q--){
            int l,r;        cin>>l>>r;
            cout<<query(l,r)<<"\n";
    }
}


int main()
{
    FIO;
    int tc = 1;
//    cin>>tc;
    for(int i=1;i<=tc;i++){
        test_case();
    }
}

