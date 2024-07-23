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

vector<vector<int>>arr;
int n,cnt=0,k;
void backtrack(int current_city, vector<bool>& visited_cities, int total_time, int num_visited, int target_visited) {
    if (num_visited == target_visited) {
        if (current_city == 0 && total_time == k) {
            cnt++;
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!visited_cities[i]) {
            visited_cities[i] = true;
            backtrack(i, visited_cities, total_time + arr[current_city][i], num_visited + 1, target_visited);
            visited_cities[i] = false; // Backtrack: reset the visited status of the current city
        }
    }
}


int main() {
    cin >> n >> k;
    arr.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    vector<bool> visited_cities(n, false);
    visited_cities[0] = true; // City 1 is always visited first.

    backtrack(0, visited_cities, 0, 1, n); // Pass n as the target_visited parameter

    cout << cnt << endl;

    return 0;
}


