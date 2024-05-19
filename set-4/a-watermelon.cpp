#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int input;
    std::cin >> input;
    bool found = false;

    for (int i = 2; i <= input - 2; i += 2) {
        if ((input - i) % 2 == 0) {
            std::cout << "YES";
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "NO";
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
}