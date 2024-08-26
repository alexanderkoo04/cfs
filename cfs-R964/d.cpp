#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    string input, match;
    cin >> input >> match;
    int count = 0;
    for (auto c : input) {
        if (c == '?') count++;
    }
    if (count >= match.size()) {
        cout << "YES" << endl;
        int j = 0;
        for (int i = 0; i < match.size(); i++) {
            while (j < input.size() && input[j] != '?') j++;
            if (j >= input.size()) break;
            input[j] = match[i];
        }
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '?') input[i] = 'a';
        }
        cout << input << endl;
    }
    else {
        int i = 0;
        int j = 0;
        while (i < input.size() && j < match.size()) {
            if (input[i] == match[j]) j++;
            else if (input[i] == '?') {
                input[i] = match[j];
                j++;
            }
            i++;
        }
        if (j == match.size()) {
            for (i; i < input.size(); i++) {
                if (input[i] == '?') input[i] = 'a';
            }
            cout << "YES" << endl << input << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}