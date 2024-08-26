#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string input;
    cin >> input;
    int c = 0;
    for (auto ch : input) {
        if (ch == 'U') c++;
    }
    if (c % 2 == 0) {
        cout << "NO";
    }
    else {
        cout << "YES";
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