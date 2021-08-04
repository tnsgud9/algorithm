#include <iostream>
#include <vector>
#define NMAX 1000000
using namespace std;


vector<int> decP;//decimalPoint
void sieveOfEratosthenes(int N) {
	decP.resize(N + 1, 0);
	decP[1] = 1;
	for (int i = 2; i<=N; i++) {
		if (!decP[i]) {
			for (int j = i + i; j <= N; j += i) {
				decP[j] = 1;
			}
		}
	}
}

void printDecimalPoints(int M,int N) {
	for (int i = M; i <= N; i++) {
		if (!decP[i]) {
			cout << i << "\n";
		}
	}

}


int main() {
	int M, N;
	cin >> M >> N;

	sieveOfEratosthenes(N);

	printDecimalPoints(M, N);

}