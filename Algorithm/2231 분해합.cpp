#include <iostream>

using namespace std;


int t(int N) {
	if (N < 10) return N;
	return t(N / 10) + N % 10;

} // ���� �� ������ 7�� �̴�.

int f(int p) {
	for (int i = 1; i <= 1000000; i++) {
		if (i+t(i) == p) return i;
	}
	return 0; // �ش� ���� �������� ã�� ������ ���� 0�� ��ȯ �ȴ�.
}

int main() {
	int N;
	cin >> N;
	cout << f(N);
}