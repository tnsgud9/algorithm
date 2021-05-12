#include <iostream>
#include <vector>

using namespace std;

vector<int> A,B;
int aWin, bWin;

int main() {
	for (int i = 0; i < 10; i++) {
		int n; cin >> n;
		A.push_back(n);
	}
	for (int i = 0; i < 10; i++) {
		int n; cin >> n;
		B.push_back(n);
	}

	for (int i = 0; i < 10; i++) {
		if (A[i] == B[i]) continue;
		A[i] > B[i] ? aWin++ : bWin++;
	}
	if (aWin == bWin) {
		cout << "D";
		return 0;
	}
	cout << ( aWin > bWin ? "A" :  "B" );
}