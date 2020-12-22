#include <iostream>
#include <vector>


using namespace std;

int n;

void move(int from, int to) {
	cout << from << ' ' << to << endl;
}


void hanoi_tower(int n, int from, int by, int to) {
	// ���� ����
	if (n == 1) move(from, to);
	else {
		hanoi_tower(n - 1, from, to, by);
		move(from, to);
		hanoi_tower(n - 1, by, from, to);
	}

}



int main() {
	cin >> n; //������ ����
	cout << n * 2 + 1 << endl;
	hanoi_tower(n, 1, 2, 3);

}