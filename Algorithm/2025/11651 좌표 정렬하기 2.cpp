//
// Created by user on 2026-01-17.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> ap, pair<int, int> bp) {
    if (ap.second == bp.second) {
        return ap.first < bp.first;
    }
    return ap.second < bp.second;
}


vector<pair<int, int> > vec;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    sort(vec.begin(), vec.end(), comp);
    for (pair<int, int> v: vec) {
        cout << v.first << " " << v.second << "\n";
    }
    return 0;
}

