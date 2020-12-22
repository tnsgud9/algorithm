#include <iostream>

using namespace std;
int main() {

	int N;
	int level = 1;
	//고정적인 수열이다.
	//1 = level	1		1
	//2~7 level 2		1 + 6 = 7
	// 8~ 19 level 3	1 + 6 + 12 = 19
	// 20 ~ 37 level 4	1 + 6 + 12 + 18 = 37
	//					누적합 + 마지막 값 + 6

	cin >> N;
	long long sum = 1;
	long long lastValue = 6;
	int cnt = 1;

	while (sum < N) {
		sum += lastValue;
		cnt++;
		lastValue += 6;
	}

	cout << cnt;

}