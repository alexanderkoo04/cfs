#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int first, second, third;
    cin >> first >> second >> third;

    int low = min(first, min(second, third));
    int high = max(first, max(second, third));

    int sol = INT_MAX;

    for (int i = low; i <= high; i++) {
        int total = (abs(first - i) + abs(second - i) + abs(third - i));
        // cout << abs(first - i) << " + " << abs(second - i) << " + " << abs(third - i) << endl;
        sol = min(sol, total);
    }

    cout << sol << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}