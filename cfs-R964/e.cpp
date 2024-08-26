#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int log3(int x) {
    return static_cast<int>(ceil(log(x) / log(3)));
}
double trueSquare(int x) {
    return log(x) / log(3);
}

void solve() {
    int l, r;
    cin >> l >> r;
    int steps = 0;
    double t = trueSquare(l);
    if (trueSquare(l) == 0) {
        steps += 2;
    }
    else if (t == static_cast<int>(t)) steps += ((static_cast<int>(t) + 1) * 2);
    else steps += (log3(l) * 2);

    for (int i = l + 1; i <= r; i++) {
        double t = trueSquare(i);
        if (t == static_cast<int>(t)) {
            steps += (static_cast<int>(t) + 1);
        }
        else steps += log3(i);
    }
    cout << steps << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}