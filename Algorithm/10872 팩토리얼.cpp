/* 10872 ���丮�� */
// ����Լ��� �̿��� ���丮��
// ����Լ��� ������ ���Ƚ���� N�� ���� 
// �� ������ ���� ��ø�Ǿ� ���� �÷ο츦 �߻� ��ų���ִ�.

#include<iostream>
using namespace std;



int factorial(int a) {
	if (a == 0) return 1;
	return a * factorial(a - 1);
}

int main() {
	int N;
	cin >> N;
	cout << factorial(N);
}
