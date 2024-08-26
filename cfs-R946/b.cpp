#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int case_count;
    std::cin >> case_count;
    std::vector<std::string> sol;

    for (int i = 0; i < case_count; i++) {
        int n;
        std::string input;
        std::cin >> n >> input;
        std::set<char> chars;
        std::vector<char> vec;
        std::unordered_map<char, char> map;

        for (auto ch : input) {
            chars.insert(ch);
        }

        for (auto ch : chars) {
            vec.push_back(ch);
        }
        std::sort(vec.begin(), vec.end());

        int l = 0;
        int r = vec.size() - 1;

        while (l != vec.size() && r != -1) {
            map[vec[l]] = vec[r];
            l++;
            r--;
        }

        for (int i = 0; i < n; i++) {
            input[i] = map[input[i]];
        }

        sol.push_back(input);
    }

    for (auto st : sol) {
        std::cout << st << std::endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
}