#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
	int pos;
	vector<pair<int, int>> dw;
};

vector<Node> node;
vector<int> dist;
priority_queue <Node> pq;

void dijkstra(int k) {
	dist[k] = 0;
	pq.push(node[k]);
	while (!pq.empty()) {
		Node n = pq.top();
		pq.pop();
		for (int i = 0; i < n.dw.size(); i++) {
			
		}
	}
}

int main() {
	int N,E,K;
	cin >> N>>E>>K;
	node.resize(N + 1);
	dist.resize(N + 1,INT_MAX);
	for (int i = 1; i <= E; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		node[u].pos = u;
		node[u].dw.push_back(make_pair(v, -w)); //edge(direction), weight;
		//우선순위 큐 특성상 가장 큰수부터 나오기 때문에 -로 변환한다.
	}

	dijkstra(K);


}
