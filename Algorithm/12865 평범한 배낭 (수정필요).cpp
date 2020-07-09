#include <iostream>
#include <vector>
#include <algorithm>
// knapsack problem

using namespace std;

struct abc {
	int W, V;
};
vector<abc> in_data;

int N, K, W, V;
vector<int> list;

void input() {
	cin >> N >> K;
	in_data.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> W >> V;
		in_data[i].W = W;
		in_data[i].V = V;
	}
	list.resize(K + 1);
}

void ksnapsack() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; in_data[i].W + j <= K; j++) {
			list[in_data[i].W + j] = in_data[i].V + list[j] > list[in_data[i].W + j] ? in_data[i].V + list[j] : list[in_data[i].W + j];
		}
	}
}


int main() {
	freopen("input.txt", "r", stdin);
	input();

	ksnapsack();
	cout << list[K];
}

