//
// ������ ����ġ�� �ֱ� ������ �������带 ����Ѵ�.
// E log V

// ���� �̱���
#include<iostream>
#include<vector>

using namespace std;

struct abc {
	int r;
	int w;
};

vector<vector<pair<int,int>>> node;

int n, M;
void input() {
	cin >> n >> M;

	node.resize(M+2, vector<pair<int, int>>());

	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		node[a].push_back(make_pair(b,c));
	}

}


int main()
{
	freopen("input.txt", "r", stdin);
	input();
}