#include <iostream>

using namespace std;


int t(int N) {
	if (N < 10) return N;
	return t(N / 10) + N % 10;

} // 최장 콜 스택은 7개 이다.

int f(int p) {
	for (int i = 1; i <= 1000000; i++) {
		if (i+t(i) == p) return i;
	}
	return 0; // 해당 값을 분해합을 찾지 못했을 경우는 0이 반환 된다.
}

int main() {
	int N;
	cin >> N;
	cout << f(N);
}