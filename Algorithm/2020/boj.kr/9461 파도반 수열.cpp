//핵심 : freeopen을 쓰자

#include <iostream>
#include <vector>

using namespace std;
vector<long long> vec = { 0,1,1,1 };
int N, T;
long long dp(int n) {
	for (int i = 1; i <= n; i++) {
		vec.push_back(vec[i] + vec[i + 1]);
	}
	return vec[N];
}

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << dp(N) << "\n";
		vec = { 0,1,1,1 };
	}


}