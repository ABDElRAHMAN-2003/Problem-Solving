#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,9,7,8,9};
    int x=5;
    auto k=lower_bound(arr,arr+10,x)-arr;
    auto a=upper_bound(arr,arr+10,x);
    // cout<<a-k;
    // if(k<10&&arr[k]==x) cout<<"oui";
    // cout<<k;
    auto r=equal_range(arr,arr+10,x);
    cout<<r.second-r.first;

}




