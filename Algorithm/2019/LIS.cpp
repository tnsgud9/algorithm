// LIS (Longest Increasing Sequence)
#include <iostream>
#include <vector>

using namespace std;
int n;
vector<int> vec_origin;
vector<int> re;
void input() {
	cin >> n;
	vec_origin.resize(n);
	for (int i = 0; i < n; i++) cin >> vec_origin[i];
}
void LIS() {
	re.push_back(vec_origin[0]);
	int i = 0, j = 0;
	for (int i = 0; i < n; i++) {
		int leng = re.size();
		int j;
		for (j = 0; j < leng; j++) {
			if (vec_origin[i] <= re[j]) {
				re[j] = vec_origin[i];
				break;
			}
		}
		if(j==leng)
			re.push_back(vec_origin[i]);

	}
}
int main() {
	freopen("input.txt", "r", stdin);
	input();

	LIS();
	cout << re.size();

}

