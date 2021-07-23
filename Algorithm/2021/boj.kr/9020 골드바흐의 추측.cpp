#include <iostream>
#include <vector>

using namespace std;

vector<int> decimalPoint; // �ش� �ε����� �Ҽ��� 0 �ƴϸ� 1
vector<int> decimalPointSet; // �Ҽ��� �ε����� ����.

void sieveOfEratosthenes(int N) {
	decimalPoint.resize(N + 1, 0); // �迭 ũ�� ������
	for (int i = 2; i <= N; i++) {
		if (!decimalPoint[i]) {
			for (int j = i+i; j <= N; j += i) {
				decimalPoint[j] = 1;
			}
		}
	}

	for (int i = 2; i <= N; i++) {
		if (!decimalPoint[i])
			decimalPointSet.push_back(i); // �迭 ���� ���� �߰�.
	}
}


void goldbachConjecture(int N) {
	int min = N / 2;
	int plus = N-min;
	//Ex ) N == 7 
	//     min = 3, plus = 4
	// �μ��� ���̰� ���� ���� ���� ����ؾ� �ϱ⿡ N�� ���ݺ��� �¿�� �������鼭 Ž���Ѵ�.

	while (true)
	{
		if (decimalPoint[plus] == 0 && decimalPoint[min] ==0) {
			cout << min << " " << plus << "\n";
			return;
		}
		else {
			min--;
			plus++;
		}
	}
}

int main() {
	sieveOfEratosthenes(10000);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		goldbachConjecture(n);
		
	}
}