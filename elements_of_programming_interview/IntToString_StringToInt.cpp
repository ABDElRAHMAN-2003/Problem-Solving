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


string IntToString(int x){
    string s;
    bool neg=false;
    if(x<0){
        neg=true;
    }
    do{
        s+='0'+abs(x%10);
        x/=10;
    }while(x);

    if(neg){
        s+='-';
    }
    return s;
}

int StringToInt (string s){
    int result=0;
    for(int i=s[0]=='-'?1:0;i<s.size();i++){
        int digit=s[i]-'0';
        result=result*10+digit;
    }
    return s[0]=='-'? -result:result;
}
int main(){
    cout<<IntToString(435);
    string s;cin>>s;
    cout<<StringToInt(s);
}