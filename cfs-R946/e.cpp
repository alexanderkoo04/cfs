#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int c;
    std::cin >> c;
    for (int i = 0; i < c; i++) {
        int months, salary;
        int happiness = 0;
        int currentMoney = 0;
        std::cin >> months >> salary;
        int cost, happ;
        for (int i = 0; i < months; i++) {
            std::cin >> cost >> happ;
            if (currentMoney - cost >= 0) {
                happiness += happ;
                currentMoney -= cost;
            }
            currentMoney += salary;
        }
        std::cout << happiness << std::endl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
}