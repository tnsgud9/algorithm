/* 10872 팩토리얼 */
// 재귀함수를 이용한 팩토리얼
// 재귀함수의 단점은 재귀횟수인 N의 따라 
// 콜 스택이 많이 중첩되어 오버 플로우를 발생 시킬수있다.

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
