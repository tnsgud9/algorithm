#include <iostream>
#include <vector>

using namespace std;

void ACM_Hotel(int H, int W, int N) {
	
	if (H * W == N) { // 꼭대기 층일때
		cout << H * 100 + W<<"\n";
	}
	else {
		if(N%H == 0)
			cout << H * 100 + (N / H) <<  "\n";
		else {
			cout << N % H * 100 + (N / H + 1) << "\n";
		}
	}
}


int main() {
	int T;
	int H, W, N;
	cin >>T;
	
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		ACM_Hotel(H, W, N);
	}
}
