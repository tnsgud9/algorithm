// LIS (Longest Increasing Sequence)
#include <iostream>
#include <vector>

using namespace std;
int N;
vector<int> vec;
vector<int> re;
void input() {
	cin >> N;
	vec.resize(N);
	for (int i = 0; i < N; i++) cin >> vec[i];
}
void LIS() {
	re.push_back(vec[0]);
	int i = 0, j = 0;
	for (int i = 0; i < N; i++) {
		int leng = re.size();
		int j;
		for (j = 0; j < leng; j++) {
			if (vec[i] <= re[j]) {
				re[j] = vec[i];
				break;
			}
		}
		if(j==leng)
			re.push_back(vec[i]);

	}
}
int main() {
	freopen("input.txt", "r", stdin);
	input();

	LIS();
	cout << re.size();

}

