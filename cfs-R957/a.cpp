#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    priority_queue<int, vector<int>, greater<int>> maxHeap;
    maxHeap.push(a);
    maxHeap.push(b);
    maxHeap.push(c);

    for (int i = 0; i < 5; i++) {
        int curr = maxHeap.top() + 1;
        maxHeap.pop();
        maxHeap.push(curr);
    }

    int res = 1;

    while (!maxHeap.empty()) {
        res *= maxHeap.top();
        maxHeap.pop();
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}