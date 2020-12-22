#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<int> st;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int m;
		cin >> m;

		if (m == 0 && !st.empty()) st.pop();
		else st.push(m);
	}
	int sum = 0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;
}