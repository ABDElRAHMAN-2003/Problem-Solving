#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

const int MAX_N = 1000;  // Define an appropriate maximum value for array sizes

ll knapsackDP(ll n, ll W, ll wt[], ll val[]) {
    vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, 0));

    for (ll i = 1; i <= n; i++) {
        for (ll w = 1; w <= W; w++) {
            if (wt[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wt[i - 1]] + val[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    int t = 1;
    // cin>>t;
    while (t--) {
        ll n, W;
        cin >> n >> W;
        ll wt[MAX_N];
        ll val[MAX_N];
        for (ll i = 0; i < n; i++) {
            cin >> wt[i] >> val[i];
        }
        cout << knapsackDP(n, W, wt, val);
    }
    return 0;
}
