#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
typedef long long ll;
typedef long double ld;
const int N = 2e5 + 35, LG = 22, mod = 998244353, base1 = 127, base2 = 1000721;
char tree[4*N];
int a[N];
int n;
set<char>distinct_char;
string s;
int s_z=s.size();

void build(int ni=0, int ns = 1, int ne =s_z){
    if(ns == ne){
        tree[ni] = s[ns];
        return;
    }
    int mid = (ns+ne)>>1, lf = (2*ni)+1, rt = (2*ni)+2;
    build(lf, ns, mid);
    build(rt, mid+1, ne);
    tree[ni] = min(tree[lf], tree[rt]);
}

void update(int pos, char val, int ni=0, int ns=1, int ne=s_z){
    if(ns == ne){
        tree[ni] = val;
        return;
    }
    int mid = (ns+ne)>>1, lf = 2*ni+1, rt = 2*ni+2;
    if(pos<=mid)    update(pos, val, lf, ns, mid);
    else            update(pos, val, rt, mid+1, ne);
    tree[ni] = min(tree[lf], tree[rt]);
}

void query(int qs, int qe, int ni=0, int ns=1, int ne=s_z){
    if(ns>qe || ne<qs)    return;
    if(ns>=qs && ne<=qe){
        distinct_char.insert(tree[ni]);
        return;
    }
    int mid = (ns+ne)>>1, lf = 2*ni+1, rt = 2*ni+2;
    query(qs, qe, lf, ns, mid);
    query(qs, qe, rt, mid+1, ne);
}



void test_case(){
    cin>>s>>n;
    char c;
    int x,q,l;
    build();
    for(int i=0;i<n;i++){
        distinct_char.clear();
        cin>>q;
        if(q==1){
            cin>>x>>c;
            update(x,c);
        }
        else{
            cin>>x>>l;
            query(x,l);
            cout<<distinct_char.size()<<endl;
        } 
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

