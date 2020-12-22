#include <iostream>
#include <vector>

using namespace std;
int main() {
	int n;
	cin >> n;
	int cnt = 0;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		if (t == 1) continue;
		else if (t == 2 || t == 3 || t == 5 || t == 7) { cnt++; continue; }
		else if (t % 2 != 0 || t % 3 != 0 || t % 5 != 0 || t % 7 != 0) cnt++;
	}
	cout << cnt;
}