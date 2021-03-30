#include <iostream>
#include <vector>
#include <queue>

//검사중 오류가 존재함.

using namespace std;


vector<vector<int>> node;
vector<int> visit;
int cnt = 0;

void bfs(int v) {
	queue<int> que;
	que.push(v);

	while (!que.empty())
	{
		int n = que.front();
		que.pop();
		if (!visit[n]) {
			visit[n] = 1;
			cnt++;
		}
		else continue;
		for (int i = 0; i < node[n].size(); i++) {
			que.push(node[n][i]);
		}
	}
}

int main() {
	int M, N;
	cin >> N;
	cin >> M;
	node.resize(N + 1);
	visit.resize(N + 1);
	for (int i = 0; i < M; i++) {
		int n, e;
		cin >> n >> e;
		node[n].push_back(e);
	}

	bfs(1);
	
	cout << cnt-1;
}