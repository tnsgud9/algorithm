//
// 음수의 가중치가 있기 떄문에 벨만포드를 사용한다.
// E log V

// 아직 미구현
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