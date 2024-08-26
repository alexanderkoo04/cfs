#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int l = 0, r = 2;
    std::vector<std::vector<int>> triples;
    
    while (r < n) {
        std::vector<int> push;
        for (int i = l; i <= r; i++) {
            push.push_back(a[i]);
        }
        triples.push_back(push);
        l++;
        r++;
    }
    long long num_pairs = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            std::map<std::array<int, 2>, int> cnts;
            for (const auto& x : triples) {
                cnts[{x[i], x[j]}]++;
            }
            for (const auto& [val, cnt] : cnts) {
                num_pairs += static_cast<long long>(cnt) * (cnt - 1) / 2;
            }
        }
    }

    std::map<std::vector<int>, int> cnts;
    for (const auto& x : triples) {
        cnts[x]++;
    }
    for (const auto& [val, cnt] : cnts) {
        num_pairs -= static_cast<long long>(cnt) * (cnt - 1) / 2 * 3;
    }
    std::cout << num_pairs << std::endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}