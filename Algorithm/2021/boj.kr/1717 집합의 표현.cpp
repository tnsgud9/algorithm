#include <iostream>
#include <vector>

using namespace std;
int N, M;
int a, b, c;
int reachIndex;

vector<int> node;




//노드 갱신도 시켜줘야해? 시벌 ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ

int find_parent(int n) {
	if (node[n] == n) return n;
	else {
		return find_parent(node[n]);
	}
}

void union_find(int n) {
	if (n == reachIndex) {
		cout << "YES\n";
		return;
	}
	else {
		if (node[n] == n) {
			cout << "NO\n";
			return;
		}
		return union_find(node[n]);
	}
}

void union_node(int parentIndex, int childIndex) {
	int topParentIndex = find_parent(parentIndex);
	node[childIndex] = topParentIndex;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	node.resize(N + 1);
	for (int i = 0; i <= N; i++) node[i] = i;

	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;

		if (a) {
			reachIndex = b;
			union_find(c);
			//출력
		}
		else {
			//정점 연결 union
			union_node(b, c);
		}
	}

}