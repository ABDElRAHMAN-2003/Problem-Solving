#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;
typedef long long int ll;
#define pp pair<int,int>
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


int c=0,k=0;
int n,a[1010],step[1010];
void sol(){ 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            c++;
        }
    }
    memset(step,0,sizeof(step));
    for(int i=0; i<n; i++){
        if(a[i]==1){
            step[k]++;
            for(int j=i+1; j<n; j++){
                if(a[j]==1){
                    break;
                }
                else{
                    step[k]++;
                }
            }
            k++;
        }
    }
}

int main(){
   sol();
   cout<<c<<endl;
    for(int i=0; i<k; i++){
        cout<<step[i]<<" ";
    }
    cout<<"\n";

    return 0;
}