#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<int,int>
#define dbg printf("in");
#define NL cout<<'\n';
#define MAX_INT 1000000
#define pi 3.1416
#define MOD 1000000007

#define Size 100010
#define oo 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define NL cout<<'\n';

bool check(vector<int>&Stalls,int Min_dis,int k){
    int cows=1;
    int LastCowpos=Stalls[0];
    for(int i=0;i<Stalls.size();i++){
        if(Stalls[i]-LastCowpos>=Min_dis){
            cows++;
            LastCowpos=Stalls[i];
            if(cows>=k) return true;
        }
    }
    return false;
}

int main(){
  int t;cin>>t;
  while(t--){
    FIO;
    int n,c;cin>>n>>c;vector<int>Stalls(n);
    for(int i=0;i<n;i++){
        cin>>Stalls[i];
    }
    sort(Stalls.begin(),Stalls.end());
    int low=0,high=Stalls[n-1]-Stalls[0],M_dis=0;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(check(Stalls,mid,c)){
            M_dis=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     cout<<M_dis<<endl;
   
  } 
}