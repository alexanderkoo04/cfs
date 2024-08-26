#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> v(n, make_pair(-1, -1));
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
    }
    sort(v.begin(), v.end());
    int maxInterval = -1;
    maxInterval = v[0].first;
    for (int i = 1; i < n; i++) {
        maxInterval = max(maxInterval, v[i].first - v[i - 1].second);
    }
    maxInterval = max(maxInterval, m - v.back().second);
    if (maxInterval >= s) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}