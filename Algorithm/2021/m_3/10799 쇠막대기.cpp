#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> sta;
int main() {
	int cnt = 0;
	string str;
	sta.push(str[0]);
	cin >> str;
	for (int i = 1; i < str.length(); i++) {
		if (str[i] == '(') sta.push(str[i]);
		else {
			if (str[i - 1] == ')') {
				sta.pop();
				cnt += 1;
			}
			else {
				sta.pop();
				cnt += sta.size();
			}
		}
	}
	cout << cnt;
}