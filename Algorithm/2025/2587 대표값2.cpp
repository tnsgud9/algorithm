//
// Created by user on 2026-01-17.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> vec;
int sum = 0;
int main() {
    int sum  =0;
    for (int i=0;i<5;i++) {
        int n;
        cin >>n;
        vec.push_back(n);
        sum += n;
    }
    sort(vec.begin(), vec.end());
    cout << sum/5 << "\n"<< vec[2];
}