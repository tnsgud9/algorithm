#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int c = 10;
	cin >> s;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) {
			c += 5;
		}
		else {
			c += 10;
		}
	}
	cout << c;
}