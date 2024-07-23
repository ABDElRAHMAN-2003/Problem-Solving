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

void A(char x){
    string s="codeforces";
    bool t=0;
    for(int i=0;i<s.length();i++){
        if(x==s[i]){
          t=1;
          break;
        }
    }
    if(t){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
void B(){
    int n,X=0,Y=0;cin>>n;
    bool t=0;
    string u;cin>>u;
    for(int i=0;i<n;i++){
        if(u[i]=='U') Y++;
        else if(u[i]=='D') Y--;
        else if(u[i]=='R') X++;
        else if(u[i]=='L') X--;
        if(X==1&&Y==1) {
            t = 1;
            break;
        }
        else
            continue;
    }
    (t)?cout<<"YES\n":cout<<"NO\n";
    return;
}

void C(){
    int n;cin>>n;
    string s;cin>>s;
    int l=0,r=n-1;
    int count=n;
    while(l<=r&&s[l]!=s[r]){
        if((s[l]=='0'&&s[r]=='1')||(s[l]=='1'&&s[r]=='0')){
            count-=2;
        }
        l++;r--;
    }
    cout<<count<<'\n';
}

void D(){
    int n;cin>>n;
    int freq[30]={0};
    set<char>duplicate;
    string s;cin>>s;
    int sum=0;
    for(int i=0;i<n;i++){
        duplicate.insert(s[i]);
    }
    if(duplicate.size()==1){
        sum=2;
    }
    else if(duplicate.size()==2){
        sum=3;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (freq[s[i]] < 1) {
                freq[s[i]]++;
                continue;
            } else if (freq[s[i]] >= 1) {
                sum = (n - (n - i)) + (n - i);
                break;
            }
        }
    }

    cout<<sum<<'\n';
}

void E(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mx=arr[0];
    int sum=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        sum+=mx;
    }
    if(sum<=0) cout<<mx+sum;
    else cout<<sum<<endl;
}
 int main(){
     int t;cin>>t;
     while(t--){
         D();
     }

 }