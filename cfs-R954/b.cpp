#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int row, column;
    cin >> row >> column;

    double grid[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            int val;
            cin >> val;
            grid[i][j] = val;
        }
    }

    if (row == 1 && column == 1) {
        cout << grid[0][0] << endl;
        return;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            bool top = true;
            bool bot = true;
            bool left = true;
            bool right = true;
            double maxNeighbor = 0;

            if (i - 1 >= 0) {
                top = false;
                if (grid[i][j] > grid[i - 1][j]) {
                    maxNeighbor = max(maxNeighbor, grid[i - 1][j]);
                    top = true;
                }
            }
            if (i + 1 < row) {
                bot = false;
                if (grid[i][j] > grid[i + 1][j]) {
                    maxNeighbor = max(maxNeighbor, grid[i + 1][j]);
                    bot = true;
                }
            }
            if (j - 1 >= 0) {
                left = false;
                if (grid[i][j] > grid[i][j - 1]) {
                    maxNeighbor = max(maxNeighbor, grid[i][j - 1]);
                    left = true;
                }
            }
            if (j + 1 < column) {
                right = false;
                if (grid[i][j] > grid[i][j + 1]) {
                    maxNeighbor = max(maxNeighbor, grid[i][j + 1]);
                    right = true;
                }
            }

            if (top && bot && right && left) {
                grid[i][j] = maxNeighbor;
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}