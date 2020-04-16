#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<pair<int,int>>> vec;
int cnt = 0;
int main() {
	freopen("input.txt", "r", stdin);
	cin >> n;
	vec.resize(n + 10);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vec[a].push_back(make_pair(b,b-a));
	}
	int sIndex=0;
	int eIndex;
	int weight;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			if (eIndex == i) { cnt++; }
			if(vec[sIndex][j].)
		}
	}
}