#include <iostream>
#include <vector>
#include <algorithm>
struct abc
{
	int s, e;
};

//이 문제의 핵심은 끝나는 타임이다.
using namespace std;
bool cmpME(const abc &a, const abc &b) {
	if (a.e == b.e) return a.s < b.s;
	else return a.e < b.e;
}

int main() {
	int n;
	vector<abc> vec;


	//input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		abc c;
		cin >> c.s >> c.e;
		vec.push_back(c);
	}
	sort(vec.begin(), vec.end(),cmpME);

	int cnt = 0;
	//process

	int m=0;
	for (int i = 0; i < vec.size(); i++) {
		if (m <= vec[i].s) {
			m = vec[i].e;
			cnt++;
		}
	}
	cout << cnt;

	return 0;

}