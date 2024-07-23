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

// //int binary search() {
// //    FIO;
// //    int n, y;
// //    cin >> n >> y;
// //    vector<int> V1(n);
// //    for (int i = 0; i < n; i++)
// //        cin >> V1[i];
// //    for (int i = 0; i < y; i++) {
// //        int k;
// //        cin >> k;
// //        bool flag = false;
// //        int l = 0, h = n - 1;
// //        while (h >= l) {
// //            int mid = (l + h) / 2;
// //            if (V1[mid] == k){
// //                flag = true;
// //                break;
// //            }
// //            else if (V1[mid] < k)
// //                l = mid + 1;
// //            else if (V1[mid] > k)
// //                h = mid - 1;
// //        }
// //        if(flag){
// //            cout<<"YES"<<endl;
// //        }
// //        else {
// //            cout<<"NO"<<endl;
// //        }
// //    }
// //}

// int matrix_diff(){
//     FIO;
//     int t;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         int l=1,r=n*n;
//         int arr[n*n];
//         for(int i=0;i<n*n;i+=2){
//             arr[i]=l;l++;
//             arr[i+1]=r;r--;
//         }
//         bool line=false;
//         for(int i=0;i<n;i++){
//             if(line){
//                 for(int j=(i+1)*n-1;j>=i*n;j--){
//                     cout<<arr[j]<<' ';
//                 }
//             }
//             else{
//                 for(int j=(i*n);j<(i+1)*n;j++){
//                     cout<<arr[j]<<' ';
//                 }
//             }
//             NL;
//             line=!line;
//         }

//     }

// }

// int rain(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int counter=1;
//     int maxvalue=1;
//     for(int i=0;i<n;i++) {
//         cin >> arr[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int left=i;left>0;left--){
//             if(arr[left] >= arr[left-1]) {
//                 counter++;
//             }else {
//                 break;
//             }
//         }
//         for(int right=i;right<n;right++){
//             if(arr[right] >= arr[right+1]){
//                 counter++;
//             }
//             else
//                 break;
//         }
//         maxvalue=max(maxvalue,counter);
//         counter=1;
//     }
//     cout<<maxvalue;
// }



// // trial for hossam and combinators problem  what is the problem ?? 
// int main(){
//      int t;cin>>t;
//      while(t--){
//          int n;cin>>n;
//          vector<int>V(n);
//          map<int,int>freq;
//          for(int i=0;i<n;i++){
//              cin>>V[i];
//              freq[V[i]]++;
//          }
//          sort(V.begin(),V.end());
//          int Big=INT16_MIN;
//          int count=0;
//          for(int i=0,j=n-1;i<n&&j>0;i++,j--){
//              if(abs(V[i]-V[j]) >= Big){
//                  Big=abs(V[i]-V[j]);
//                  count++;
//              }
//              if(freq[V[i]]>1){
//                  count*=2;
//                  freq[V[i]]--;
//              }
//              if(freq[V[j]]>1){
//                  count*=2;
//                  freq[V[j]]--;
//              }
//          }
//          cout<<count*2<<endl;

//      }

// }
