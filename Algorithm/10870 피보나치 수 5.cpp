#include<iostream>
using namespace std;

int fibonacci(int n) {
	if (n == 0) return 0; // n-2�� 0�� ���Ë�
	else if (n == 1)return 1; //n-1�� ��ͷ� 1�� ���ϵɋ�
	//0 + 1 + 1 + 2 + 3 + 5 ...
	//
	else return fibonacci(n - 1) + fibonacci(n-2);
}
int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5-i; j++) cout << " ";
		for (int j = 1; j <= i; j++) cout << "*";
		cout << "\n";
	}
	int N;
	cin >> N;
	cout << fibonacci(N);

}