#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long sol = 0;
    long long largest = 0;
    long long sum = 0;
    unordered_set<long long> next;

    for (int i = 0; i < n; i++) {
        long long e;
        cin >> e;
        if (i == 0 && e == 0) {
            next.insert(0);
            sol++;
            continue;
        }
        if (next.find(e) != next.end()) {
            sol++;
        }
        largest = max(largest, e);
        sum += e;
        next.clear();
        next.insert(sum);
        if (sum - largest <= largest) {
            next.insert(largest - (sum - largest));
        }
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