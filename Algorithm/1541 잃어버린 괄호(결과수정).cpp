#include <iostream>
#include <string>

using namespace std;

string val;


int main() {
	cin >> val;
	int check = 0;
	for (int i = 0; i < val.length(); i++) {
		if (val[i] == '-' && check ==0) {
			val.insert(i+1, "(");
			check = 1;
			continue;
		}
		else if (val[i] == '-' && check == 1) {
			val.insert(i, ")");
			check = 0;
			continue;
		}
	}
	if (check == 1)val.insert(val.length(), ")");
	cout << val;
}