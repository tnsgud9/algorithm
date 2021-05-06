#include <iostream>
#include <vector>

using namespace std;
int N, M;
int a, b, c;

vector<int> node;

int reachIndex;

int find_parent(int n) {
	if (node[n] == n) return n;
	else {
		int m = find_parent(node[n]);
		node[n] = m;
		return m;
	}
}


void union_node(int parentIndex, int childIndex) {
	node[find_parent(parentIndex)] = find_parent(childIndex);
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
			if (find_parent(c) == find_parent(b)) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
			//union_find(c);
			//출력
		}
		else {
			//정점 연결 union
			union_node(b, c);

		}

	}

}