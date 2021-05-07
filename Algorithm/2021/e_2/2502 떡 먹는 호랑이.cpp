#include <iostream>
#include <vector>

using namespace std;
/*
2 = A
7 = B
 1A + 0B  = 2
 0A + 1B  = 7
 1A + 1B  = 9
 1A + 2B  = 16
 2A + 3B  = 25
 3A + 5B  = 41
 5A + 8B  = 66
 8A + 13B = 107
13A + 21B = 173
A�� B�� ���� �����ϴ� ũ�⸦ ���� ����
�Ǻ���ġ�� ������ �ʴ°�?
*/

int fibo(int n) {
	if (n <= 1) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int D, K ,A,B;
	cin >> D >> K;
	A = fibo(D - 2);
	B = fibo(D-1);

	for(int i = 1;i<=K;i++)
		for (int j = 1; j <= K; j++) {
			if ((A * i + B * j == K)) {
				cout << i << "\n" << j;
				return 0;
			}
		}
	return 0;
}