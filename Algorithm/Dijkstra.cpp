//Dijkstra ���ͽ�Ʈ��
/*
	�ϳ��� �������� ��� �������� �ִܰ�θ� ���Ѵ�.
	���� : �������� ��� ���� �������� ������ �Ѵ�. (���� ������ ���ԵǸ� ���� ���带 ����ض�)
*/


// �̹� Dijkstra�� �����ϱ� ���� ������
// ���ؿ� �ִ� �ִܰ�ζ� ������ �ڵ带 �ۼ��Ͽ� �����Ѵ�.
// https://www.acmicpc.net/problem/1753
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int V, E; // vertex , edge
int K;

struct abc
{
	int visit;
	int weight; //weight�� ��ø�� ���� �����Ѵ�.
	int previousNode;
};
vector<vector<pair<int,int>>> node;
vector<abc> nodeData;
queue<int> que;


void input() {
	cin >> V >> E;
	cin >> K;
	node.resize(V + 1,vector<pair<int,int>>());
	nodeData.resize(V + 1);
	for (int i = 0; i < E; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		node[u].push_back(make_pair(v, w)); //first : ������� Second : ����ġ
	}

}

void output(int start) {
	if(start !=1)
		output(nodeData[start].previousNode);
	cout << nodeData[start].weight << '\n';

}


void dijkstra(int start) {
	que.push(start);
	int x;
	while (!que.empty())
	{
		x = que.front();
		que.pop();
		for (int i = 0; i < node[x].size(); i++) {
			int targetNode = node[x][i].first;
			int targetNodeWeight = node[x][i].second;
			int expectWeight = nodeData[targetNode].weight + node[x][i].second;

			if (nodeData[targetNode].weight > expectWeight || nodeData[targetNode].weight==0) {
				nodeData[targetNode].weight = nodeData[x].weight + node[x][i].second;
				nodeData[targetNode].previousNode = x; 

				que.push(node[x][i].first);
			}
		}

	}
	/*
	for (int i = 1; i <= V; i++) {
		if (nodeData[i].weight == 0 && i != 1) cout << "INF\n";
		else cout << nodeData[i].weight << endl;
	}
	*/
	if (x == V) {
		output(x);
	}
	else {
		output(x);
		cout << "INF";
	}

}
int main() {
	freopen("input.txt", "r", stdin);
	input();

	dijkstra(K);

}