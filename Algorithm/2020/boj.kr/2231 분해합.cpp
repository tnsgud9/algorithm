#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string nums;
		nums = to_string(i);
		int sum = 0;
		for (int j = 0; j < nums.length(); j++) {
			int tmp = nums.at(j)-48;
			sum += tmp;
		}
		sum += i;
		if (sum == n) {
			cout << i;
			return 0;
		}
	}
}