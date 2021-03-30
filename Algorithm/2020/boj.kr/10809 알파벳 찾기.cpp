#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> alphabet(26, -1);

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (alphabet[s[i] - 97] == -1) {
			alphabet[s[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i]<<" ";
	}
}