#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int D, sumTime;
    std::cin >> D >> sumTime;

    std::vector<int> minTimes(D);
    std::vector<int> maxTimes(D);
    int minPossible = 0, maxPossible = 0;

    for (int i = 0; i < D; i++) {
        std::cin >> minTimes[i];
        std::cin >> maxTimes[i];
        minPossible += minTimes[i];
        maxPossible += maxTimes[i];
    }

    if (minPossible > sumTime || maxPossible < sumTime) {
        std::cout << "NO";
        return;
    }

    std::cout << "YES" << std::endl;

    int timeRem = sumTime - minPossible;
    std::vector<int> schedule = minTimes;

    for (int i = 0; i < D; i++) {
        int addTime = std::min(timeRem, maxTimes[i] - minTimes[i]);
        schedule[i] += addTime;
        timeRem -= addTime;
    }

    for (auto t : schedule) {
        std::cout << t << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
}