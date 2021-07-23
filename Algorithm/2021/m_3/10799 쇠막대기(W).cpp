#include <iostream>
#include <string>
#include <stack>
using namespace std;

int sta = -1;
int sum = 0;
int main() {
	string str;
	cin >> str;
	int cnt = 0, sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			sta++;
		else {
			sta--;
			for (int i = 1; i <= sta; i++) sum += i;

		}
	}
	cout << sum;
}