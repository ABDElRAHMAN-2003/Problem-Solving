#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

typedef long long int ll;

#define pp pair<int,int>
#define dbg printf("in");
#define NL cout<<'\n';
#define pi 3.1416

#define Size 100010
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define NL cout<<'\n';


void p1(){
    int t;cin>>t;
    vector<pair<int,int>>Pairs_1;
    while (t--){
        int n;cin>>n;

        
        int num_op=0;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

        int xor_all = 0;
        for (int i = 1; i <=n; i++) {
            xor_all ^= arr[i];
        }
        if (xor_all == 0) {
            cout << "1\n";
            cout<<1<<' '<<n; 
            continue;
        }
        
        for(int l=1;l<=n;l++){
            int s=arr[l];
            for(int r=2;r<=l;r++){
                s^=arr[r];
                if(s==0){
                    num_op++;
                    Pairs_1.push_back({l,r});
                    l=r;
                    r=l+1;
                }
            }
        }
    cout<<num_op<<endl;
    for(auto s:Pairs_1){
        cout<<s.first<<' '<<s.second<<endl;
    }
    }
}

int main(){
    FIO;
    p1();
}



