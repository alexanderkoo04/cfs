#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int score = 0;

    int scenarios[4][2][2] = {
        {{a1, b1}, {a2, b2}},
        {{a1, b2}, {a2, b1}},
        {{a2, b1}, {a1, b2}},
        {{a2, b2}, {a1, b1}}
    };

    for (int i = 0; i < 4; ++i) {
        int suneetWins = 0;
        // Check each round
        if (scenarios[i][0][0] > scenarios[i][0][1]) suneetWins++;
        if (scenarios[i][1][0] > scenarios[i][1][1]) suneetWins++;

        if (suneetWins == 2) score++;
    }
    
    cout << score << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}