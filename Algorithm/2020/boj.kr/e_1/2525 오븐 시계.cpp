#include <iostream>

using namespace std;

int main() {
	int h, m;
	int p;
	cin >> h >> m;
	cin >> p;

	h += (p + m) / 60;
	m = (p+m) % 60;

	h %= 24;
	cout << h <<" " << m;

}