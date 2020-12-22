#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<pair<int,int>>> vec_origin;
int cnt = 0;
int main() {
	freopen("input.txt", "r", stdin);
	cin >> n;
	vec_origin.resize(n + 10);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vec_origin[a].push_back(make_pair(b,b-a));
	}
	int sIndex=0;
	int eIndex;
	int weight;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < vec_origin[i].size(); j++) {
			if (eIndex == i) { cnt++; }
			if(vec_origin[sIndex][j].)
		}
	}
}