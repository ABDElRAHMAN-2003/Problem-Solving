// #include<bits/stdc++.h>
// using namespace std;

// typedef long long int ll;
// typedef long double lf;

// typedef long long int ll;

// #define pp pair<int,int>
// #define dbg printf("in");
// #define NL cout<<'\n';
// #define pi 3.1416

// #define Size 100010
// #define inf 1000000000000
// #define max2(a,b) ((a<b)?b:a)
// #define max3(a,b,c) max2(max2(a,b),c)
// #define min2(a,b) ((a>b)?b:a)
// #define min3(a,b,c) min2(min2(a,b),c)
// #define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)
// #define NL cout<<'\n';


// void p1(){
//     int t;cin>>t;
//     vector<pair<int,int>>Pairs_1;
//     while (t--){
//         bool found=false;
//         int n;cin>>n;
//         int num_op=0;
//         int arr[n+1];
//         for(int i=1;i<=n;i++){
//             cin>>arr[i];
//         }
//         int s=arr[1];
//         int l=1,r=2;
//         while(r<=n){
//             s^=arr[r];
//             if(s==0&&arr[r+1]!=0){
//                 num_op++;
//                 Pairs_1.push_back({l,r});
//                 l=r;
//                 r++;
//                 s=arr[l];
//                 found=1;
//             }
//             else{
//                 r++;
//             }
//             if(r==n&&!found){
//                 ++l;
//                 r=l+1;
//             }
//         }
//         cout<<num_op<<endl;
//         for(auto s:Pairs_1){
//             cout<<s.first<<' '<<s.second<<endl;
//         }
//     }
// }

// int main(){
//     FIO;
//     p1();
// }




#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<pair<int, int>> operations;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Find the XOR of all elements in the array
        int xor_all = 0;
        for (int i = 0; i < n; i++) {
            xor_all ^= a[i];
        }

        if (xor_all == 0) {
            cout << "0\n"; // No operations needed
        } else {
            // Perform at most 8 operations
            int k = min(8, n);
            cout << k << endl;

            // In each operation, select the entire array
            for (int i = 0; i < k; i++) {
                operations.push_back({1, n});
            }

            // Output the operations
            for (int i = 0; i < k; i++) {
                cout << operations[i].first << " " << operations[i].second << endl;
            }
        }
    }

    return 0;
}
