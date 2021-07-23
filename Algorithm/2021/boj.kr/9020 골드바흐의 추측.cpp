#include <iostream>
#include <vector>

using namespace std;

vector<int> decimalPoint; // 해당 인덱스가 소수면 0 아니면 1
vector<int> decimalPointSet; // 소수인 인덱스의 집합.

void sieveOfEratosthenes(int N) {
	decimalPoint.resize(N + 1, 0); // 배열 크기 재정의
	for (int i = 2; i <= N; i++) {
		if (!decimalPoint[i]) {
			for (int j = i+i; j <= N; j += i) {
				decimalPoint[j] = 1;
			}
		}
	}

	for (int i = 2; i <= N; i++) {
		if (!decimalPoint[i])
			decimalPointSet.push_back(i); // 배열 끝에 값을 추가.
	}
}


void goldbachConjecture(int N) {
	int min = N / 2;
	int plus = N-min;
	//Ex ) N == 7 
	//     min = 3, plus = 4
	// 두수의 차이가 가장 작은 것을 출력해야 하기에 N의 절반부터 좌우로 넓혀가면서 탐색한다.

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