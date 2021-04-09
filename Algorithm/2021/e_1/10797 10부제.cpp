#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	int w = 0;
	vector<string> s(5);
	cin >> n;

	for (int i = 0; i < 5; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < s[i].length(); j++) {
			if (n == (int)s[i][j] - 48)  w++;
		}
	}

	cout << w;
}