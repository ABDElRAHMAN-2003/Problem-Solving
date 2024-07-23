#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

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

// int main(){
//     int t=1;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         n/=2;
//         if(n & 1){
//             cout<<"NO"<<endl;
//             continue;
//         }
//         cout<<"YES"<<endl;
//         for (int i = 1; i <= n; ++i) {
// 			cout << i * 2 << " ";
// 		}
// 		for (int i = 1; i < n; ++i) {
// 			cout << i * 2 - 1 << " ";
// 		}
//         cout << 3 * n - 1 << endl;
//     }
// }

int main(){
  int n;
	cin >> n;
	int Max = n;
	if (n/10 > Max) Max = n/10;
	if (n%10 + (n/100)*10 > Max) Max = n%10 + (n/100)*10;
	cout <<Max;
}