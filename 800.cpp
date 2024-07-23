#include<bits/stdc++.h>
using namespace std;

// int main() {
//     string guest, host, pile;
//     cin >> guest >> host >> pile;
//     string combined = guest + host;
//     sort(combined.begin(), combined.end());
//     sort(pile.begin(), pile.end());

//     if (combined == pile) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }

//     return 0;
// }
int main(){
    long long n,a;cin>>n;
    if(n%2==0){
        a=n/2;
    }
    else{
        a=((n + 1) / 2) * (-1);
    }
    cout << a << endl;
    return 0;
}