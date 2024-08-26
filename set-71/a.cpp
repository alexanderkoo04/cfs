#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    string input;
    cin >> input;
    
    if (input.size() > 10) {
        cout << input[0] << input.size() - 2 << input[input.size() - 1];
    }
    else {
        cout << input;
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