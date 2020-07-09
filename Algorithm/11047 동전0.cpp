#include <iostream>
#include <vector>

using namespace std;

vector<int> vec_origin;
int n, K;
int main() {
	cin >> n >> K;
	vec_origin.resize(n+1);
	for (int i = 0; i < n; i++) cin >> vec_origin[i];
	int count = 0; 
	for (int i = n - 1; i >= 0; i--) {
		if (K / vec_origin[i] != 0) {
			count += K / vec_origin[i];
			K -= (K / vec_origin[i]) * vec_origin[i];
		}
	}
	cout << count;
}