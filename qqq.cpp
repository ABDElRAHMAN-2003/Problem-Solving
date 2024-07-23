#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double lf;
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
const int MAX = 1000001;

bool prime[MAX];








// void right_binary(){
// string s;
// cin>>s;
// int size=0;
// for(int i=0;i<s.length();i++){
//         size *= 16;
//     switch(s[i]){
//         case '>':
//             size += 8;
//             break;

//         case '<':
//             size += 9;
//             break;

//         case '+':
//             size += 10;
//             break;

//         case '-':
//             size += 11;
//             break;

//         case '.':
//             size += 12;
//             break;

//         case ',':
//             size += 13;
//             break;

//         case '[':
//             size += 14;
//             break;

//         case ']':
//             size += 15;
//             break;

//         default:
//             break;

//     }
//     size %= 1000003;
// }

// cout<<size;
// }
//void  binary2(){
//    map<char,string>reverter;
//    string s1,s2;
//    cin>>s1;
//    reverter.insert(make_pair('>',"1000"));
//    reverter.insert(make_pair('<',"1001"));
//    reverter.insert(make_pair('+',"1010"));
//    reverter.insert(make_pair('-',"1011"));
//    reverter.insert(make_pair('.',"1100"));
//    reverter.insert(make_pair(',',"1101"));
//    reverter.insert(make_pair('[',"1110"));
//    reverter.insert(make_pair(']',"1111"));
//    for(int i=0;i<s1.length();i++){
//        char c=s1.at(i);
//        s2+=reverter[c];
//    }
//    long long num=stoi(s2);
//    long long dec=0;
//    int i=0,rem;
//
//    while(num!=0){
//        rem=num%10;
//        num/=10;
//        dec+=rem*pow(2,i);
//        ++i;
//    }
//
//    cout<<dec;
//
//
//
//
//}
// void sieve ()
// {
//     int i,j;
//     prime[0] = prime[1] = true;

//     for (i=4; i<MAX; i+=2)
//         prime[i] = true;

//     for (i=3; i*i<=MAX; i+=2)
//         if (!prime[i])
//             for (j=i*i; j<MAX; j+=2*i)
//                 prime[j] = true;
// }




// bool composite[MAX+1];
// //vector<int>prime;

// void sieve()
// {
//     composite[0]=composite[1]=1;
//     for (int i=2;i*i<=MAX;i++)
//     {
//          if (!composite[i])
//          {
//              for (int j=i*i;j<=MAX;j+=i)
//              {
//                  composite[j]=1;
//              }
//          }
//     }
// }


// void linear_sieve()
// {
//     composite[0]=composite[1]=1;
//     for (int i=2; i<=MAX; ++i)
//     {
//         if (!composite[i])
//         {
//             prime.push_back(i);
//         }
//         for (int j=0; j<(int)prime.size()&&i*prime[j]<=MAX; ++j)
//         {
//             composite[i * prime[j]] = 1;
//             if (i%prime[j]==0) break;

//         }
//     }
// }

// int sieve_sol(){
//     sieve();

//     int t;
//     cin>>t;
//     while(t--){
//         ll mario;
//         cin>>mario;
//         long long mario1=sqrt(mario);
//         double mario2=sqrt(mario);
//         if(composite[mario1]==0&&mario1==mario2&&mario!=1) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;

//     }
// }

// //  int main(){
// //     sieve();
// //      int t;
// //      cin>>t;
// //      ll n,r;
// //      while(t--){
// //          cin>>n;
// //          r=sqrt(n);

// //          if(!prime[r]&&r*r==n){
// //              cout<<"YES"<<endl;
// //          }
// //          else{
// //              cout<<"NO"<<endl;
// //          }
// //      }
// //  }
// int tvs(){
//     int n,m,sum=0;
//     cin>>n>>m;
//     vector<int>prices;
//     while(n--){
//         int u;
//         cin>>u;
//         prices.push_back(u);
//     }
//     sort(prices.begin(),prices.end());
//     for(int i=0;i<m;i++){
//         if(prices[i]<0) sum+=abs(prices[i]);
//         else break;
//     }
//    cout<<sum;
// }


// int before_exxam(){
//      ll i,j,n,time;
//     ll a[35],b[35];
//     while(cin>>n>>time){
//          ll min_time=0,max_time=0,sum_time=0;
//          vector<ll>v;
//         for(i=0;i<n;i++){
//             cin>>a[i]>>b[i];
//             min_time+=a[i];
//             max_time+=b[i];
//             v.push_back(a[i]);
//             sum_time+=a[i];
//         }
//         if(min_time<=time && time<=max_time){
//             cout<<"YES\n";
//             if(sum_time<time){
//             for(i=0;i<n;i++){
//                     ll df=b[i]-a[i];
//                     j=1;
//                 while(j<=df){
//                         if(sum_time==time)
//                         break;
//                     sum_time++;
//                     v[i]++;
//                     j++;
//                 }
//             }
//         }
//         for(i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
//     else
//         cout<<"NO\n";
// }
//     return 0;

// }

// void rr(){
//     int x,y;
//     while(cin>>x>>y) cout<<"yes";
// }

void w()
{
    ll t,m,counter; cin>>t;
    ll i;
    ll arr[t];
    if(t<=2)
    {
        cout<<t;
        return;
    }
    for(i=0;i<t;i++)
        cin>>arr[i];

        i=0;m=0;counter=2;
        while(i<=t-2)
        {
            if(arr[i]+arr[i+1]==arr[i+2])
                counter++,i++;

            else{
                 m=max(m,counter);
                counter=2;i++;
            }
        }

    m=max(m,counter);
    cout<<m;
    return;
    }
void u(){
    int t,ml=1,c=1;cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(i>0)
        if(arr[i]>=arr[i-1]){
            c++;
            ml=max(ml,c);
        }
        else c=1;
    }
    cout<<ml;
}
int main(){
   u();
}
