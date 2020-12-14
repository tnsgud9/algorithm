#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    int maxY = 0, maxX = 0;
    for (int i = 0; i < v.size(); i++) {
        maxY = max(v[i][0], maxY);
        maxX = max(v[i][1], maxX);
    }
    vector<int> x(maxX + 1);
    vector<int> y(maxY + 1);
    for (int i = 0; i < v.size(); i++) {
        y[v[i][0]]++;
        x[v[i][1]]++;
    }

    int reY, reX;
    for (int i = 0; i < y.size(); i++) {
        if (y[i] == 1) { reY = y[i]; break; }
    }
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == 1) { reX = x[i]; break; }
    }
    vector<int> re;

    re.push_back(reY);
    re.push_back(reX);

    return re;
}
int main() {
    solution( {{1, 4 }, { 3, 4 }, { 3, 10 }});
}