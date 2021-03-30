#include <iostream>

using namespace std;

int cnt = 1;
int main() {
	int n;
	cin >> n;
	for (int i = 1; ; i++) {
		if (i % 2 == 0) { // i가 짝수일때는 위에서 아래 가로줄로 이동a
			int x = i, y = 1;
			for (int j = 1; j <= i; j++) {
				if (cnt == n) {
					cout << y << "/" << x;
					return 0;
				}
				x--;
				y++;
				cnt++;
			}
		}
		else {
			int y = i, x = 1;
			for (int j = 1; j <= i; j++) {
				if (cnt == n) {
					cout << y << "/" << x;
					return 0;
				}
				x++;
				y--;
				cnt++;
			}
		}
	}
	

}