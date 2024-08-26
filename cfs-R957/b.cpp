#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    // int n, k;
    // deque<int> a;

    // cin >> n >> k;

    // for (int i = 0; i < k; i++) {
    //     int num;
    //     cin >> num;
    //     a.push_back(num);
    // }

    // // cout << a.size() << endl;

    // sort(a.begin(), a.end());
    // int steps = 0;

    // while (a.size() > 1) {
    //     while (a.front() == 1) {
    //         // cout << "Adding 1 and " << a.back() << endl;
    //         a.pop_front();
    //         int temp = a.back();
    //         a.pop_back();
    //         a.push_back(temp + 1);
    //         steps++;
    //     }
    //     if (a.size() > 1) {
    //         // cout << "Splitting " << a.front() << " into " << a.front() - 1 << " and 1" << endl;
    //         int temp = a.front();
    //         a.pop_front();
    //         a.push_front(temp - 1);
    //         a.push_front(1);
    //         steps++;
    //     }
    // }

    // cout << steps << endl;

    int n, k;

    cin >> n >> k;

    vector<int> a(k);

    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int steps = 0;

    for (int i = 0; i < a.size() - 1; i++) {
        steps += ((a[i] - 1) * 2) + 1;
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