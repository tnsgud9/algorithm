#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	vector<long long> vec = {0, 1,2 };
	cin >> N;
	for (int i = 2; i <= N; i++) {
		vec.push_back( (vec[i] + vec[i -1])% 15746);
	}

	cout << vec[N];
}