#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pairint,int
#define dbg printf(in);
#define NL cout'n';
#define MAX_INT 1000000
#define pi 3.1416

#define Size 100010
#define inf 1000000000000
#define max2(a,b) ((ab)ba)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((ab)ba)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_basesync_with_stdio(false),cin.tie(NULL)
#define NL cout'n';


int main(){
    int n,t,num_b=0,maxx=0;cin>>n>>t;
    vector<int>arr;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(auto s:arr){
        if((t-s)>=0){   
            t-=s;
            num_b++;
        }
        else{
            continue;
        }
        maxx=max(maxx,num_b);
    }
    cout<<num_b;
}


/*6 10  
2 3 4 2 1 1  -> 1 1 2 2 3 4 
                9 8 6 4 1
*/