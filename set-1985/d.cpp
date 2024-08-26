#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    pair<int, int> highest = {INT_MAX, 0};
    pair<int, int> lowest = {0, 0};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char input;
            cin >> input;
            if (input == '#') {
                if (i < highest.first) {
                    highest = {i, j};
                }
                if (i > lowest.first) {
                    lowest = {i, j};
                }
            }
        }
    }
    cout << (highest.first + lowest.first) / 2 << " " << highest.second << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}