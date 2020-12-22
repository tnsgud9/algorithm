#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> vec(N);

	for (int i = 0; i < N; i++) cin >> vec[i];

	sort(vec.begin(), vec.end());
	int sum = vec[0];
	for (int i = 0; i < N-1; i++) {
		vec[i + 1] += vec[i];
		sum += vec[i + 1];
	} 
	cout << sum;

}