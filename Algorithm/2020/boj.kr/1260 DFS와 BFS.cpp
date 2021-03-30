#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

int N, M, V;

vector<vector<int>> node;
vector<int> visit;

void dfs(int v) {
	if (!visit[v]) {
		cout << v << " ";
		visit[v] = 1;
	}
	else return;
	for (int i = 0; i < node[v].size(); i++) {
		dfs(node[v][i]);
	}
}

queue<int> que;
void bfs(int v) {
	que.push(v);
	while (!que.empty())
	{

		int a = que.front();
		que.pop();
		if (visit[a]) continue;
		else {
			cout << a << " ";
			visit[a] = 1;
			for (int i = 0; i < node[a].size(); i++) {
				que.push(node[a][i]);
			}
		}
	}
	
}

int main() {
	cin >> N >> M >> V;
	node.resize(N+1);
	visit.resize(N + 1);

	for (int i = 0; i < M; i++) {
		int n, m;
		cin >> n >> m;
		node[n].push_back(m);
		node[m].push_back(n);
	}
	for (int i = 1; i <= N; i++) {
		sort(node[i].begin(), node[i].end());
	}

	dfs(V);
	cout << "\n";

	visit = vector<int>(N+1);

	bfs(V);
}

