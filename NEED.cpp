#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> animals(n);

    for (int i = 0; i < n; i++) {
        cin >> animals[i].first >> animals[i].second;
    }

    sort(animals.begin(), animals.end()); // Sort the animals by their starting time.

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        int killed = 0;

        // Binary search to find the rightmost animal that starts before or at time 'l'.
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (animals[mid].first <= l) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (right >= 0 && animals[right].second >= r) {
            killed = n - right - 1;
        } else {
            killed = n - right;
        }

        cout << killed << "\n";
    }

    return 0;
}
