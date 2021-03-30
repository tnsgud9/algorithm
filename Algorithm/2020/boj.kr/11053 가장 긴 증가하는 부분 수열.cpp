#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
vector <int> vec;

vector <int> lis;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		vec.push_back(t);
	}
	lis.push_back(vec[0]);
	for (int i = 1; i < N; i++) {
		if (lis.back() < vec[i])
			lis.push_back(vec[i]);
		else {
			for (int j = 0; j < lis.size(); j++) {
				if (lis[j] >= vec[i]) {
					lis[j] = vec[i];
					break;
				}
			}
		}
	}

	cout << lis.size();
	

}