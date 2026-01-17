//
// Created by user on 2026-01-17.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> vec;
    for (char c: s) {
        vec.push_back(c - '0');
    }

    sort(vec.begin(), vec.end(), greater<>());

    for (int e: vec) {
        cout << e;
    }


    return 0;
}
