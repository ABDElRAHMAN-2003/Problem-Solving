#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double lf;

#define pp pair<int,int>
#define dbg printf("in");
#define NL cout<<'\n';
#define MAX_INT 1000000
#define pi 3.1416
#define MOD 1000000007

#define Size 100010
#define oo 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define FIO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define NL cout<<'\n';

const int KnumPegs=3;

void Compute_Twoer_Hanoi_Steps(int num_rings_to_move, array<stack<int>,KnumPegs>& pegs, int from_peg,int to_peg,int use_peg){
    if(num_rings_to_move>0){
        Compute_Twoer_Hanoi_Steps(num_rings_to_move-1,pegs,from_peg,use_peg,to_peg);
        pegs[to_peg].push(pegs[from_peg].top());
        pegs[from_peg].pop();
        cout << " Move from peg " << from_peg<<" to peg "<< to_peg<<endl;
        Compute_Twoer_Hanoi_Steps(num_rings_to_move-1,pegs,use_peg,to_peg,from_peg); 
    }
}

void ComputeTowerHanoi(int num_rings){
    array<stack<int>,KnumPegs> pegs;
    for(int i=num_rings;i>=0;i--){     // ___________________
        pegs[0].push(i);              // | \0/ |  \1/ | \2/ |
    }
    Compute_Twoer_Hanoi_Steps(num_rings,pegs,0,1,2);
}

int main(){
    ComputeTowerHanoi(6);
    return 0;
}