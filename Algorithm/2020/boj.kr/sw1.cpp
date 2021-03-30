#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> alphabet;

struct Element {
	char v;
	vector<int> d;
};
vector<Element> e;

int main() {
	
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i += 2) {
		alphabet.push_back(s[i]);
	}


	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
	}
}