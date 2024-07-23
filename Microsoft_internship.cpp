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



// int dx[] = {1, -1, 0, 0}; // Possible moves in the x direction
// int dy[] = {0, 0, 1, -1}; // Possible moves in the y direction

// bool isValid(int x, int y, int rows, int cols) {
//     return x >= 0 && x < rows && y >= 0 && y < cols;
// }

// bool dfs(vector<vector<int>>& grid, int x, int y, unordered_set<int>& visited, int prev, int steps) {
//     if (!isValid(x, y, grid.size(), grid[0].size()) || visited.count(grid[x][y]) || grid[x][y] == prev) {
//         return false;
//     }

//     visited.insert(grid[x][y]);

//     if (visited.size() == grid.size() * grid[0].size()) {
//         cout << "Shortest Path Length: " << steps << endl;
//         return true;
//     }

//     for (int i = 0; i < 4; ++i) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if (dfs(grid, nx, ny, visited, grid[x][y], steps + 1)) {
//             cout << "(" << x << "," << y << ") ";
//             return true;
//         }
//     }

//     visited.erase(grid[x][y]);
//     return false;
// }

// void findShortestPath(vector<vector<int>>& grid, int rows, int cols) {
//     unordered_set<int> visited;

//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             if (dfs(grid, i, j, visited, -1, 0)) {
//                 cout << "Starting Point: (" << i << "," << j << ")" << endl;
//                 return;
//             }
//         }
//     }

//     cout << "No valid path found." << endl;
// }

// int main() {
//     int rows, cols;
//     cin >> rows >> cols;

//     vector<vector<int>> grid(rows, vector<int>(cols));

//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cin >> grid[i][j];
//         }
//     }

//     findShortestPath(grid, rows, cols);

//     return 0;
// }


