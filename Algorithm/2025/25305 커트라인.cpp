//
// Created by user on 2026-01-17.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;

int main() {
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end(), greater<>());

    cout << vec[k - 1];
}
