// 그리디 문제

#include <iostream>

using namespace std;

int n ,cnt;
int M = 1000;
int mon[6] = {500, 100, 50, 10 ,1};
int main() {
	cin >> n;
	if(n != 1000) M -= n;
	for (int i = 0; i < 6; i++) {
		if (M <= 0) { cout << cnt; return 0;}
		if (M / mon[i] != 0) {
			cnt += M / mon[i];
			M -= mon[i] * (M / mon[i]);
		}
	}
}