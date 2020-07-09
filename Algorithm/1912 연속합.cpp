#include <iostream>
#include <vector>
using namespace std;
vector<int> vec;
int N;
int main() {
	cin >> N;
	vec.resize(N);
	for (int i = 0; i < N; i++)	cin >> vec[i];
	int max = vec[0];

	for (int i = 0; i < N-1; i++) {
		if (vec[i] > 0) {
			if (vec[i] + vec[i + 1] > 0)
			{
				vec[i + 1] += vec[i];
			}
		}

		if (vec[i + 1] > max)
			max = vec[i + 1];
	}

	cout << max;
	
}