#include <iostream>
#include <string>

using namespace std;

int main() {
	string  b;
	cin >> b;
	int r = 0, l = 0;
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '(') r++;
		else l++;
	}
	if (r == l) cout << "YES";
	else cout << "NO";
	
}