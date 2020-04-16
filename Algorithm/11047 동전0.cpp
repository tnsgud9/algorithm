#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;
int n, K;
int main() {
	cin >> n >> K;
	vec.resize(n+1);
	for (int i = 0; i < n; i++) cin >> vec[i];
	int count = 0; 
	for (int i = n - 1; i >= 0; i--) {
		if (K / vec[i] != 0) {
			count += K / vec[i];
			K -= (K / vec[i]) * vec[i];
		}
	}
	cout << count;
}