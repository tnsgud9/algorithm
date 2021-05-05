#include <iostream>

using namespace std;

int main() {
	int a, b;
	int max = 0;
	int cnt = 0;


	for (int i = 0; i < 4; i++) {
		cin >> a >> b;
		cnt -= a;
		if (max < cnt) max = cnt;
		cnt += b;
		if (max < cnt) max = cnt;
	}
	cout << max;
}
