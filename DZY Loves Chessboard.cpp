#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.') {
                if ((i + j) & 1)
                    grid[i][j] = 'W';
                else
                    grid[i][j] = 'B';
            }
        }
        cout << grid[i] << endl;
    }

    return 0;
}
