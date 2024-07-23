#include<bits/stdc++.h>
using namespace std;

short CountBits(unsigned int x){   // bullit_popcount
    int num_of_Abits=0; 
    while(x){
        num_of_Abits+=(x&1);   //(x&1)?0:1
        x>>=1;
    }
    return num_of_Abits;
}

int main(){
    int x;cin>>x;
    cout<<CountBits(x);
}