#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int length, swim;
    size_t jump;
    string input;
    cin >> length >> jump >> swim;
    cin >> input;
    vector<vector<int>> vec(length, {0, INT_MAX}); // {true/false, distance required}
    int goal = length;

    for (int i = input.size() - 1; i >= 0; i--) {
        // croc
        if (input[i] == 'C') continue;
        // water
        else if (input[i] == 'W') {
            if (i + 1 == goal) vec[i] = {1, 1}; // can reach goal
            else if (!vec[i + 1][0]) continue; // next is invalid
            else {
                vec[i] = {1, vec[i + 1][1] + 1};
            }
        }
        // log
        else {
            for (int j = 1; j < min(jump + 1, vec.size() + 1); j++) {
                if (i + j == goal) { // can reach goal
                    vec[i] = {1, 0};
                    break;
                }
                else if (!vec[i + j][0]) continue; // invalid
                else {
                    vec[i] = {1, min(vec[i][1], vec[i + j][1])}; // minimum true value
                }
            }
        }
    }

    // for (auto v : vec) {
    //     cout << "{" << v[0] << ", " << v[1] << "} ";
    // }
    // cout << endl;

    for (int i = 0; i < min(jump, vec.size() + 1); i++) {
        if (i == goal || vec[i][0] && vec[i][1] <= swim) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}