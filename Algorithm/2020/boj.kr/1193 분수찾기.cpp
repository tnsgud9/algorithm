#include <iostream>

using namespace std;

int cnt = 1;
int main() {
	int n;
	cin >> n;
	for (int i = 1; ; i++) {
		if (i % 2 == 0) { // i�� ¦���϶��� ������ �Ʒ� �����ٷ� �̵�a
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