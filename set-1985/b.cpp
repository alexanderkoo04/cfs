#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int maxSum = 0;
    int ans;
    for (int i = 2; i <= n + 1; i++) {
        int sum = 0;
        int num = 1;
        while (i * num <= n) {
            sum += i * num;
            num++;
        }
        if (sum > maxSum) {
            maxSum = sum;
            ans = i;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}