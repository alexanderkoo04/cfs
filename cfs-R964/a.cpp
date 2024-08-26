#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string input = to_string(n);
    int ans = (input[0] - '0') + (input[1] - '0');
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}