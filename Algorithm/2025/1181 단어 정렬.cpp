//
// Created by user on 2026-01-17.
//


#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

// 비교 함수 객체
struct Compare {
    bool operator()(const std::string &a, const std::string &b) const {
        if (a.length() == b.length())
            return a < b; // 길이가 같으면 사전순
        return a.length() < b.length(); // 길이가 짧은 것이 먼저
    }
};


int main() {
    int n;
    cin >> n;
    set<string, Compare> s;
    for (int i = 0; i < n; i++) {
        string m;
        cin >> m;
        s.insert(m);
    }
    //
    // sort(s.begin(), s.end(), comp);
    for (string str: s) {
        cout << str << "\n";
    }
}
