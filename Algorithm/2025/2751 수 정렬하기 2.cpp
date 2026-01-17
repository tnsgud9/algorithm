//
// Created by user on 2026-01-17.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;

int main() {
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
 sort(vec.begin(), vec.end());

    for (int e: vec) {
        cout << e << "\n";
    }

}
