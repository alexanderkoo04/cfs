#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool inBounds(int x, int y, int x_size, int y_size) {
  return x >= 0 && x < x_size && y >= 0 && y < y_size;
}

void coutMatrix(vector<vector<int>>& matrix) {
  for (vector<int> row : matrix) {
    for (int i = 0; i < row.size(); i++) {
      cout << row[i] << " ";
    }
    cout << endl;
  }
}

void solve(vector<vector<vector<int>>>& matrixes) {
  std::queue<pair<int, vector<int>>> q;
  for (vector<vector<int>> matrix : matrixes) {
    for (int x = 0; x < matrix.size(); x++) {
      for (int y = 0; y < matrix[x].size(); y++) {
        // greater than surrounding elements
        bool isGreater = true;
        int max_arround = 0;
        // x axis check
        for (int i = -1; i < 2; i++) {
          if (i == 0) {
            continue;
          }
          if (inBounds(x + i, y, matrix.size(), matrix[x].size())) {
            if (matrix[x + i][y] >= matrix[x][y]) {
              isGreater = false;
            }
            max_arround = max(max_arround, matrix[x + i][y]);
          }
        }
        // y axis check
        for (int j = -1; j < 2; j++) {
          if (j == 0) {
            continue;
          }
          if (inBounds(x, y + j, matrix.size(), matrix[x].size())) {
            if (matrix[x][y + j] >= matrix[x][y]) {
              isGreater = false;
            }
            max_arround = max(max_arround, matrix[x][y + j]);
          }
        }
        if (isGreater) {
          matrix[x][y] = max_arround;
        }
      }
    }
    coutMatrix(matrix);
  }
}

int main() {
  auto t = 0;
  std::cin >> t;
  vector<vector<vector<int>>> matrixes;
  int r, c;
  while (std::cin >> r >> c) {
    vector<vector<int>> matrix;
    for (int i = 0; i < r; i++) {
      vector<int> row;
      for (int j = 0; j < c; j++) {
        int a = 0;
        std::cin >> a;
        row.push_back(a);
      }
      matrix.push_back(row);
    }
    matrixes.push_back(matrix);
  }
  solve(matrixes);
}