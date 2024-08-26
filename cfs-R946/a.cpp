#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int x, y;
    std::cin >> x >> y;
    int screens = 0;

    while (y) {
        if (y > 1) {
            x -= std::min(7, x);
            y -= 2;
        }
        else if (y == 1) {
            x -= std::min(11, x);
            y--;
        }
        screens++;
    }

    while (x) {
        x -= std::min(x, 15);
        screens++;
    }
    std::cout << screens << std::endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}