#include<bits/stdc++.h>

#define FIO ios_base::sync_with_stdio(false),cout.tie(nullptr),cin.tie(nullptr)
#define endl "\n"

using namespace std;

int main(){
    FIO;
    int t=1;
    int n,h,k,l,in=0,sec=0;
    vector<int> a;
    cin >> n,h,k;

    while(t--){
        for(int i=0 ; i<n ; i++){
            cin >> l;
            a.push_back(l);
        }

        while(!a.empty()){
            int front = a.front();
            if(!(in+front>h)){
                in+=front;
                a.erase(a.begin());
            }
            else{
                in -= k;
                sec++;
            }
        }

        cout << sec;
    }
}