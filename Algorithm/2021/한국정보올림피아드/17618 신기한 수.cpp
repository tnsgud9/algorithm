//��36ȸ�ѱ������ø��ǾƵ�2����ȸ(2019.7.20)�ߵ�ι���1
//https://oikorea.org/problem/53/view

#include <iostream>
#include <string>

using namespace std;
int cnt = 0;
void checker(int N) {
	string s = to_string(N);
	
	int sum = 0;
	for (int j = 0; j < s.length(); j++) {
		sum += s[j]-48;
	}
	if (N % sum == 0) 
		cnt++;
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		checker(i);
	}

	cout << cnt;


}