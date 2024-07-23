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

int n=5;
int arr[5][5]={0};

void printPascal(){
    for(int idx=5;idx>=1;idx--){
        for(int i=idx,j=1;i>=1,j<=n;i--,j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void generatePascal(){
    for(int i=1;i<=n;i++){
        arr[i][1]=1;
    }
    for(int j=1;j<=n;j++){
        arr[1][j]=1;
    }

    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
}

void print(){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

   generatePascal();
//    print();
    printPascal();
    
}
