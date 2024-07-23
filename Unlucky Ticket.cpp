#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;
typedef long long int ll;

#define pp pair<ll,ll>
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

int main(){
    int n;cin>>n;
    int flag=1,mode,eq=0;
    string s;cin>>s;
    int t=2*n;
    ((s[0]-'0')>(s[t-1]-'0'))?mode=1:mode=0; // we got only two modes
    if((s[0]-'0')>(s[t-1]-'0')) eq=1;       //check equality
   for(int i=1;i<n;i++){
    if((s[i]-'0')<(s[t-(i+1)]-'0')&&mode&&!eq) flag=0;
    else if((s[i]-'0')>(s[t-(i+1)]-'0')&&!mode&&!eq) flag=0;
   }
    (flag)?cout<<"YES":cout<<"NO";
   return 0;
}
//4033517   Jul 7, 2013 11:10:00 AM	fuwutu	 160B - Unlucky Ticket	 GNU C++0x	Accepted	15 ms	0 KB

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     size_t n;
//     string s, l, r;
//     cin >> n >> s;
//     l = s.substr(0, n);
//     r = s.substr(n, n);
//     sort(l.begin(), l.end());
//     sort(r.begin(), r.end());
//     bool strictly_less(true), strictly_more(true);
//     for (size_t i = 0; i < n; ++i)
//     {
//         if (l[i] >= r[i])
//         {
//             strictly_less = false;
//             break;
//         }
//     }
//     for (size_t i = 0; i < n; ++i)
//     {
//         if (l[i] <= r[i])
//         {
//             strictly_more = false;
//             break;
//         }
//     }
//     cout<<l<<' '<<r<<endl;
//     cout << ((strictly_less || strictly_more) ? "YES" : "NO") << endl;
//     return 0;
// }