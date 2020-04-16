#include <iostream>
#include <vector>

using namespace std;
int N;
vector<unsigned long> P{ 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9 }; //1~10 // 8, 9
void input() {
	cin >> N;
}

int main() {
	input();
	for (int a = 0; a < N; a++) {
		int n;
		cin >> n;
		if (n <= 10) cout << P[n];
		else {
			for (int i = 10; i <= n; i++) {
				P.push_back(P[i - 1] + P[i - 2]);
			}
			cout << P[n];
		}
	}
}