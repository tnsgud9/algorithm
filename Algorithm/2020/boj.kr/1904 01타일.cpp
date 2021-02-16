#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	vector<long long> vec = { 1,2 };
	cin >> N;
	for (int i = 1; i < N; i++) {
		vec.push_back(vec[i] + vec[i -1]);
	}
	cout << vec[N-1];
}