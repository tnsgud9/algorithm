#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;
string S,T;
queue<char> q;
int cnt = 1;
int main() {
	cin >> S >> T;
	for (int i = 0; i < S.length(); i++) q.push(S[i]);

	string cs = S, ct = T;
	sort(cs.begin(), cs.end());
	sort(ct.begin(), ct.end());
	cs.erase(unique(cs.begin(), cs.end()), cs.end());
	ct.erase(unique(ct.begin(), ct.end()), ct.end());
	
	int i = 0;
	while (!q.empty()) //S가 비어있을 때까지 반복한다.
	{

		if (q.front() == T[i++]) {
			q.pop();
		}

		if (i >= T.length()) {
			i = 0;
			cnt++;
		}
		// S[i]와 T[j]를 비교 한다. 만약 같으면  i는 1씩 증가하며 기본적으로 j++
		// 만약 T를 전부 돌았을때  T는 0 이 되고, cnt는 1 카운트 된다.
		
	}

	cout << cnt;
}