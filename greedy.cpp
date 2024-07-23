// #include <bits/stdc++.h>
// using namespace std;

// // int main() {
// //     int ans = 1;
// //     int arr[] = {-1,-2,1, 2, 1, 3, 4, 6};
// //     int n = sizeof(arr) / sizeof(arr[0]);
    
// //     int freq[7] = {0}; // Initialize array with zeros

// //     sort(arr, arr + n);

// //      if (arr[n - 1] <= 0 || n==0) {
// //         cout << 1;
// //         return 0;
// //     }
// //     for (int i = 0; i < n; i++) {
// //         freq[arr[i]]++;
// //     }

// //     for (int j = 0; j < n; j++) {
// //         if (freq[ans]>0) {
// //             ans++;
// //         } else {
// //             break;
// //         }
// //     }

// //     cout << ans;
// //     return 0;
// // }



// int solution(vector<int> &A) {
//     unordered_set<int> uniqueElements;
//     for (int num : A) {
//         if (num > 0) {
//             uniqueElements.insert(num);
//         }
//     }
//     int ans = 1;
//     while (uniqueElements.count(ans)) { 
//         ans++;
//     }
//     return ans;
// }


// Remember, all submissions are being checked for plagiarism.
// Your recruiter will be informed in case suspicious activity is detected.

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <bits/stdc++.h>
using namespace std;

// int dp [10];
// void Before(vector<int> &blocks,int i,int &max_dis, int n){
//     while(blocks[i] <= blocks[i-1]&& i>0){
//         max_dis++;
//         i--;
//     }
// }

// void After(vector<int> &blocks,int i,int &max_dis, int n){
//     while((blocks[i] <= blocks[i+1]) && i<(n-1)){
//         max_dis++;
//         i++;
//     }
// }

// int solution(vector<int> &blocks) {

//     int n = blocks.size();
//     int max_dis = 1;
//     int ans=0;
//     for(int i=0 ; i < n; i++){
//         Before(blocks,i,max_dis,n);
//         After(blocks,i,max_dis,n);
//         ans = max(ans,max_dis);
//         max_dis=1;
//     }

//     return ans;
// }


#include <iostream>
#include <vector>
#include <set>

using namespace std;

int ao(vector<int> &A) {
    set <int> s;
    for (int a : A) {
        s.insert(a);
    }
    return s.size();
}

int main() {
    // Example usage
    vector<int> myVector = {1, 2, 1, 6, 4, 3};
    int result = ao(myVector);

    // Print the result
    cout << result << endl;

    return 0;
}

