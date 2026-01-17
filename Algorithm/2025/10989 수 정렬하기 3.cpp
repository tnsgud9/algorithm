//
// Created by user on 2026-01-17.
//

#include <iostream>
#include <vector>

using namespace std;
vector<int> vec(10001, 0);

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vec[m]++;
    }
    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < vec[i]; j++) {
            cout << i << "\n";
        }
    }
}
