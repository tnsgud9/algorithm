#include <iostream>
#include <vector>
//dp�� �����м��� ���ϸ� ���� ��Ģ�� ã�� �� �ִ�.

//�Ǻ���ġ�� ���� �����̴�.
using namespace std;
int n;
vector<int> vec_origin;
int sum = 0;
int main() {
	cin >> n;
	vec_origin.resize(n);
	if (n == 0) { cout << 0; return 0; }
	if (n == 1) { cout << 1; return 0; }
	vec_origin[0] = 1;
	vec_origin[1] = 2;

	for (int i = 2; i < n; i++) {
		vec_origin[i] = vec_origin[i - 2] + vec_origin[i - 1];
	}
	cout << vec_origin[n-1];



}