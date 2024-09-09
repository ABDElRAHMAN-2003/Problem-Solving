//
// Created by pc on 9/8/2024.
//

#include <bits/stdc++.h>
using namespace std;

bool isValid(const vector<int> &col_placement) {
    int row_id = col_placement.size() - 1;
    for (int i = 0; i < row_id; i++) {
        int diff = abs(col_placement[i] - col_placement[row_id]);
        if (diff == 0 || diff == row_id - i) {
            // A queen is in the same column or on a diagonal
            return false;
        }
    }
    return true;
}

void SolveNQueens(int n, int row, vector<int>* colplacement, vector<vector<int>>* result) {
    if (row == n) {
        result->emplace_back(*colplacement);  // Found a valid solution, add it to the result
    } else {
        for (int col = 0; col < n; col++) {
            colplacement->push_back(col);  // Try placing a queen in the current column
            if (isValid(*colplacement)) {  // Check if the current placement is valid
                SolveNQueens(n, row + 1, colplacement, result);  // Recurse to the next row
            }
            colplacement->pop_back();  // Backtrack by removing the queen from this column
        }
    }
}

vector<vector<int>> NQueens(int n) {
    vector<vector<int>> result;  // Initialize result as an empty vector of vectors
    SolveNQueens(n, 0, make_unique<vector<int>>().get(), &result);  // Start the recursion
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> solutions = NQueens(n);

    // Output the solutions
    for (const auto& solution : solutions) {
        for (int col : solution) {
            cout << col << " ";  // Each number represents the column of the queen in each row
        }
        cout << endl;
    }
}
