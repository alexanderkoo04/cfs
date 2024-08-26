#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, k, m;
    cin >> n >> m >> k;
    // deque<int> dq;
    for (int i = n; i > m; i--) {
        cout << i << " ";
    }
    for (int i = 1; i <= m; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}