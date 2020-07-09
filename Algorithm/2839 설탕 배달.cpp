#include <iostream>

using namespace std;
int main() {
	int N;
	cin >> N;
	int f,t;

	f = N / 5;
	N %= 5;

	while (true) {

		if (f == 0 && N!=3) { cout << "-1"; return 0; }
		if (N % 3 != 0) {
			f--;
			N += 5;
			continue;
		}
		else {
			t = N / 3;
			break;
		}
		

	}
	cout << f + t;

}