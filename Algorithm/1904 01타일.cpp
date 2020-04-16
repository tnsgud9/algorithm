#include <iostream>
#include <vector>
//dp는 문제분석을 잘하면 쉽게 규칙을 찾을 수 있다.

//피보나치와 같은 원리이다.
using namespace std;
int n;
vector<int> vec;
int sum = 0;
int main() {
	cin >> n;
	vec.resize(n);
	if (n == 0) { cout << 0; return 0; }
	if (n == 1) { cout << 1; return 0; }
	vec[0] = 1;
	vec[1] = 2;

	for (int i = 2; i < n; i++) {
		vec[i] = vec[i - 2] + vec[i - 1];
	}
	cout << vec[n-1];



}